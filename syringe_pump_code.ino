//Hi this is the improved v2 final of prototype prankster Syringe Pump project, 
//because im not sure i will get the og code in time. from the images
//i have, this code includes the programming for the on switch, pot inputs, 
//forward button, reverse button, software limits for the carriage

#include <AccelStepper.h>

// ============================================================
//  Pin definitions(sett t basic arduino pins because i cant remember the pins i used)
// ============================================================

const int STEP_PIN = 2;
const int DIR_PIN = 3;

const int ON_OFF_BUTTON = 4;
const int FORWARD_BUTTON = 5;
const int REVERSE_BUTTON = 6;

const int POT_PIN = A0;


// STEPPER SETUP (used example online to see how this works)

AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN);


// ============================================================
//                    SYRINGE SETTINGS
// ============================================================
//
// depending on the size of the syringe 1 or 2 is used as the setting

// 1 = syringe type 1
// 2 = syringe type 2
const int SYRINGE_TYPE = 1;


// Syringe type 1 

const double SYRINGE_1_DIAMETER_MM = 14.9;
const double SYRINGE_1_TRAVEL_MM = 60.0;


//Syringe Type 2

const double SYRINGE_2_DIAMETER_MM = 19.1;
const double SYRINGE_2_TRAVEL_MM = 60.0;


// settings (more constants)

const double LEAD_SCREW_MM_PER_REV = 2.0;

// Example:
// 200 step motor × 16 microsteps = 3200 steps/rev
const double STEPS_PER_REV = 3200.0;

const double MM3_TO_ML = 0.001;


//spd setting

const double MAX_STEP_SPEED = 1000.0;


// ============================================================
//                    GLOBAL VARIABLES
// ============================================================

double syringeDiameter;
double maxTravelMM;

long maxTravelSteps;

bool pumpEnabled = false;

// Used so one button press toggles ON/OFF only once
//probably more finicky than other methods but its what i used
bool lastOnOffButtonState = HIGH;

unsigned long lastSerialPrint = 0;


//setup includes if statements that have different diameter and max travel lengths dependin 
//on the type const above (setup took longer than no setup)

void setup() {

  Serial.begin(9600);

  pinMode(ON_OFF_BUTTON, INPUT_PULLUP);
  pinMode(FORWARD_BUTTON, INPUT_PULLUP);
  pinMode(REVERSE_BUTTON, INPUT_PULLUP);

  stepper.setMaxSpeed(MAX_STEP_SPEED);


  // if type 1 or type 2, changing variable sizes

  if (SYRINGE_TYPE == 1) {

    syringeDiameter = SYRINGE_1_DIAMETER_MM;
    maxTravelMM = SYRINGE_1_TRAVEL_MM;

  }

  else {

    syringeDiameter = SYRINGE_2_DIAMETER_MM;
    maxTravelMM = SYRINGE_2_TRAVEL_MM;

  }


  // Convert usable syringe travel from mm to motor steps
  maxTravelSteps = travelMMToSteps(maxTravelMM);


  //starting position is set to 0 and is assumed to be fully retracted
  //so if not, retract it

  stepper.setCurrentPosition(0);


  Serial.println("--------------------------------------");
  Serial.println("SYRINGE PUMP READY");
  Serial.println("--------------------------------------");
  Serial.print("Diameter: ");
  Serial.print(syringeDiameter);
  Serial.println(" mm");

  Serial.print("Maximum Travel: ");
  Serial.print(maxTravelMM);
  Serial.println(" mm");

  Serial.println("--------------------------------------");
}


// ============================================================
//                          LOOP
// ============================================================

void loop() {

  //first input (the on/off button)
//currently checking if previous state was diff than current to actual do somethign (basically isr kind of)
  bool currentOnOffButtonState =
      digitalRead(ON_OFF_BUTTON);


  // Detect new button press
  if (lastOnOffButtonState == HIGH &&
      currentOnOffButtonState == LOW) {

    pumpEnabled = !pumpEnabled;

    if (pumpEnabled) {

      Serial.println("PUMP ON");

    }

    else {

      Serial.println("PUMP OFF");

      stepper.setSpeed(0);

    }

    delay(50);   // simple debounce
  }

  lastOnOffButtonState = currentOnOffButtonState;


  // pot readings voltage and mapping counts with speed

  int potValue = analogRead(POT_PIN);


  double motorSpeed = map(
                        potValue,
                        0,
                        1023,
                        0,
                        (long)MAX_STEP_SPEED
                      );


  // setting up direction buttons to off, so at this point forward need to press to move

  bool forwardPressed =
      digitalRead(FORWARD_BUTTON) == LOW;

  bool reversePressed =
      digitalRead(REVERSE_BUTTON) == LOW;


  // this if statement will only work first if the pump is turned on
  if (pumpEnabled) {


    // forward movement
    if (forwardPressed && !reversePressed) {

      // Prevent carriage from exceeding maximum syringe travel

      if (stepper.currentPosition() < maxTravelSteps) {

        stepper.setSpeed(motorSpeed);
        stepper.runSpeed();

      }

      else {

        stepper.setSpeed(0);

      }

    }


    // retracting
    else if (reversePressed && !forwardPressed) {

      // Prevent carriage from retracting past starting position

      if (stepper.currentPosition() > 0) {

        stepper.setSpeed(-motorSpeed);
        stepper.runSpeed();

      }

      else {

        stepper.setSpeed(0);

      }

    }


    // no drection button is pressed
    else {

      stepper.setSpeed(0);

    }

  }


  //pump is off
  else {

    stepper.setSpeed(0);

  }


  // output display on serial monitor
  if (millis() - lastSerialPrint >= 500) {

    lastSerialPrint = millis();

    printPumpData(motorSpeed);

  }
}


// syringe area dep[e]nds on the diameter length which can be changed up top

double calcArea(double diameterMM) {

  double radius = diameterMM / 2.0;

  return PI * radius * radius;
}


// ============================================================
//                  CALCULATE FLOW RATE (needed assistance here)
// ============================================================
// these are the units i want to be in for flow rate (volume/time) and eq i used
// Output = mL/min
//
// Q = Area × linear velocity
//

double calculateFlowRate(double diameterMM,
                         double stepsPerSecond) {

  double areaMM2 = calcArea(diameterMM);


// linear distance traveled per motor step

  double mmPerStep =
      LEAD_SCREW_MM_PER_REV / STEPS_PER_REV;


  // syringe volume displaced per step

  double volumePerStepMM3 =
      areaMM2 * mmPerStep;


  // Convert mm^3 into mL

  double volumePerStepML =
      volumePerStepMM3 * MM3_TO_ML;
//already had constant so using it

// vol per second

  double flowRateMLSec =
      abs(stepsPerSecond) * volumePerStepML;


// converting to mL/min

  return flowRateMLSec * 60.0;
}


// returning values to steps 

long travelMMToSteps(double travelMM) {

  return (long)(
    travelMM *
    STEPS_PER_REV /
    LEAD_SCREW_MM_PER_REV
  );
}

//steps to mm conversion

double stepsToTravelMM(long steps) {

  return (
    abs(steps) *
    LEAD_SCREW_MM_PER_REV /
    STEPS_PER_REV
  );
}

// serial putput of the pump

void printPumpData(double motorSpeed) {

  double positionMM =
      stepsToTravelMM(stepper.currentPosition());


  double flowRate =
      calculateFlowRate(
        syringeDiameter,
        motorSpeed
      );


  Serial.print("Pump: ");

  if (pumpEnabled) {
    Serial.print("ON");
  }
  else {
    Serial.print("OFF");
  }


  Serial.print(" | Pot: ");
  Serial.print(analogRead(POT_PIN));


  Serial.print(" | Speed: ");
  Serial.print(motorSpeed, 1);
  Serial.print(" steps/s");


  Serial.print(" | Flow Rate: ");

  // Pump is not actually flowing when disabled
  if (pumpEnabled) {
    Serial.print(flowRate, 3);
  }
  else {
    Serial.print(0.000);
  }

  Serial.print(" mL/min");


  Serial.print(" | Position: ");
  Serial.print(positionMM, 2);

  Serial.print(" / ");

  Serial.print(maxTravelMM, 2);
  Serial.print(" mm");

  // Direction this shows the four conditions that could occur from the f/revers buttons on the 
  //syringe pump

  if (!pumpEnabled) {

    Serial.print(" | STOPPED");

  }

  else if (
    digitalRead(FORWARD_BUTTON) == LOW &&
    digitalRead(REVERSE_BUTTON) == HIGH
  ) {

    Serial.print(" | FORWARD");

  }

  else if (
    digitalRead(REVERSE_BUTTON) == LOW &&
    digitalRead(FORWARD_BUTTON) == HIGH
  ) {

    Serial.print(" | REVERSE");

  }

  else {

    Serial.print(" | STOPPED");

  }


  // this if statement seems obvious

  if (stepper.currentPosition() >= maxTravelSteps) {

    Serial.print(" | FORWARD LIMIT REACHED");

  }


  if (stepper.currentPosition() <= 0) {

    Serial.print(" | REVERSE LIMIT REACHED");

  }


  Serial.println();
}