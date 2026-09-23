
---

### `machine-learning-data-science.md`

```md
---
title: "Machine Learning & Data Science"
excerpt: "Exploratory data analysis, dimensionality reduction, predictive modeling, machine learning, and model evaluation using Python."
header:
  teaser: /assets/images/data-science/data_science_thumbnail.jpg
sidebar:
  nav: "docs"
---

# Machine Learning & Data Science

![Machine Learning & Data Science](/assets/images/data-science/data_science_hero.jpg)

## Overview

I have explored data science and machine learning through a series of projects focused on turning raw data into interpretable results and predictive models.

My work included **data cleaning, exploratory analysis, visualization, dimensionality reduction, supervised learning, unsupervised learning, and model evaluation**.

A major emphasis was understanding not only how to build a model, but also how to determine whether the model was actually useful.

### Tools & Skills

- Python
- pandas
- NumPy
- scikit-learn
- XGBoost
- Exploratory Data Analysis
- Feature engineering
- Data visualization
- Logistic regression
- Random forest
- PCA
- t-SNE
- UMAP
- Clustering
- Model evaluation
- Precision & recall
- Overfitting analysis
- A/B testing
- NLP fundamentals
- Recommender systems
- Data storytelling

---

# Exploratory Data Analysis

Before building predictive models, I worked with datasets to understand their structure and identify patterns in the available features.

Typical analysis included:

- Checking missing values
- Examining variable distributions
- Identifying outliers
- Evaluating correlations
- Comparing groups
- Cleaning inconsistent values
- Visualizing trends

![Exploratory Data Analysis](/assets/images/data-science/eda_01.jpg)

This step was important because the quality of a machine learning model depends heavily on understanding the data used to train it.

---

## Data Visualization

Visualization was used throughout the analysis process to make patterns easier to interpret.

Plots were used to examine:

- Feature distributions
- Correlations
- Group differences
- Class imbalance
- Model results
- Dimensionality-reduction output

![Data Visualization](/assets/images/data-science/visualization_01.jpg)

Rather than treating visualization as only a presentation tool, I used it as part of the analytical process itself.

---

# Student Dropout Prediction

One of my primary machine learning projects investigated whether student academic and demographic information could be used to identify students at risk of dropping out.

The main question was:

> **Can institutions identify students who may need additional support before they leave school?**

![Dropout Prediction](/assets/images/data-science/dropout_hero.jpg)

The project involved cleaning the dataset, exploring patterns, comparing multiple models, and evaluating which metrics were most meaningful for the problem.

---

## Why Accuracy Was Not Enough

A major part of the project was understanding why overall accuracy does not always provide the most useful measure of model performance.

For a dropout prediction system, the important question is not only:

> How often is the model correct?

It is also:

> How many students who actually drop out does the model successfully identify?

This made **recall** particularly important.

![Confusion Matrix](/assets/images/data-science/confusion_matrix.jpg)

A model with high accuracy could still perform poorly if it failed to identify a large portion of the students actually at risk.

---

# Model Development

Several machine learning approaches were explored and compared.

These included:

- Logistic regression
- Tree-based models
- Random forest
- Gradient-boosted models
- XGBoost

Each model was evaluated using multiple performance metrics rather than relying on a single score.

![Model Comparison](/assets/images/data-science/model_comparison.jpg)

---

## XGBoost Model

One of the strongest models evaluated was an **XGBoost classifier**.

The resulting model achieved approximately:

**Test Accuracy: 76.95%**

and

**Dropout-Class Recall: 75%**

![XGBoost Results](/assets/images/data-science/xgboost_results.jpg)

For this problem, the recall score was particularly meaningful because it represented the percentage of actual dropout cases that the model correctly identified.

---

# Precision vs. Recall

The project also involved comparing precision and recall across models.

### Precision

Precision measures how many of the students predicted as being at risk actually belonged to the dropout group.

\[
Precision = \frac{TP}{TP + FP}
\]

### Recall

Recall measures how many of the actual dropout students were successfully identified.

\[
Recall = \frac{TP}{TP + FN}
\]

For an early-intervention system, missing a student who actually needs support may be more costly than flagging an additional student who ultimately does not drop out.

Because of this, recall became an important part of selecting and evaluating models.

---

# Overfitting

Another focus of the project was understanding the difference between model performance on training data and unseen test data.

![Train Test Comparison](/assets/images/data-science/overfitting_01.jpg)

A model that performs extremely well on training data but significantly worse on test data may have learned patterns that do not generalize.

This introduced important concepts including:

- Training vs. test performance
- Model complexity
- Generalization
- Bias
- Variance
- Overfitting

Rather than automatically selecting the model with the highest training score, I compared performance on unseen data.

---

# Dimensionality Reduction

Another major area I explored was **dimensionality reduction**.

Real-world datasets can contain many different variables, making it difficult to visualize the structure of the data directly.

Dimensionality-reduction techniques allow high-dimensional datasets to be represented using fewer dimensions while attempting to preserve important relationships.

---

## Principal Component Analysis

I used **Principal Component Analysis (PCA)** to transform datasets into a smaller number of components.

![PCA Visualization](/assets/images/data-science/pca_01.jpg)

PCA creates new variables called principal components that capture major directions of variance within the dataset.

This allows complex datasets to be represented in two or three dimensions while preserving as much useful variation as possible.

---

## t-SNE

I also explored **t-distributed Stochastic Neighbor Embedding (t-SNE)**.

![t-SNE Visualization](/assets/images/data-science/tsne_01.jpg)

Unlike PCA, which is a linear technique, t-SNE can reveal nonlinear relationships and is particularly useful for visualizing clusters or local structures within complex datasets.

---

## UMAP

**Uniform Manifold Approximation and Projection (UMAP)** provided another method for visualizing high-dimensional data.

![UMAP Visualization](/assets/images/data-science/umap_01.jpg)

Comparing PCA, t-SNE, and UMAP helped demonstrate how different dimensionality-reduction techniques can reveal different structures within the same dataset.

---

# Clustering

I also explored unsupervised machine learning approaches where the dataset does not contain predefined labels.

Clustering algorithms can identify groups of observations that share similar characteristics.

![Clustering](/assets/images/data-science/clustering_01.jpg)

This introduced a different type of machine learning problem:

```text
Supervised Learning
Known Labels
      ↓
Train Model
      ↓
Predict New Labels
