---
title: "Roblox Game Development"
excerpt: "Independent game development in Roblox Studio using Luau, multiplayer systems, UI, gameplay logic, and iterative prototyping."
header:
  teaser: /assets/images/roblox/roblox_thumbnail.jpg
sidebar:
  nav: "docs"
---

# Roblox Game Development

![Roblox Development](/assets/images/roblox/roblox_hero.jpg)

## Overview

Outside of my engineering coursework, I have spent time developing games and gameplay systems in **Roblox Studio**.

What originally started as experimenting with basic game ideas turned into learning how to structure larger projects using **Luau scripting, multiplayer logic, user interfaces, player progression, and event-driven systems**.

I enjoy Roblox development because it combines programming with design. A game mechanic has to work technically, but it also has to feel intuitive, responsive, and enjoyable for the player.

---

## Tools & Skills

- Roblox Studio
- Luau
- Multiplayer game logic
- Client-server communication
- UI development
- Player state management
- Physics-based gameplay
- AI behavior
- Data persistence concepts
- Rapid prototyping
- Gameplay iteration

---

# Building Gameplay Systems

One of the most interesting parts of Roblox development is that even simple game mechanics usually involve several systems working together.

For example, a single objective may require:

- Player interaction
- Server-side validation
- User interface updates
- Remote events
- Character state changes
- Win or failure conditions
- Respawning or resetting
- Persistent progress

![Roblox Studio](/assets/images/roblox/roblox_studio_01.jpg)

Working through these systems gave me experience thinking about how separate components communicate within a larger application.

---

## Client-Server Communication

Roblox uses a multiplayer architecture where the client and server handle different parts of the game.

I worked with systems such as:

- `RemoteEvent`
- `ReplicatedStorage`
- Server scripts
- Local scripts
- Player attributes
- GUI updates

For example, a player interaction could be detected on the server, validated, and then communicated back to the player's interface.

```text
Player Interaction
       ↓
Server Validation
       ↓
Remote Event
       ↓
Client UI Update
       ↓
Game State Change
