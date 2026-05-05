# Compiler Design Lab Experiments (Lab 1 – Lab 15)

## 📘 Overview

This repository contains the complete implementation of **Compiler Design Laboratory Experiments (Lab 1 to Lab 15)** using **C++**.

Each experiment is structured in a **modular and professional format**, including:

* Source code implementation
* Individual README file per experiment
* Sample input and output
* Clear explanation of concepts and logic

This repository is designed to be:

* ✅ Faculty-friendly
* ✅ Viva-ready
* ✅ GitHub-professional
* ✅ Logic-focused (not just theoretical outputs)

---

## 📂 Repository Structure

```
Compiler_Design_LabExp/
│
├── Lab-01-Lexical-Analyzer/
├── Lab-02-Regex-to-NFA/
├── Lab-03-NFA-to-DFA/
├── Lab-04-Left-Recursion-Elimination/
├── Lab-05-FIRST-FOLLOW/
├── Lab-06-Predictive-Parsing-Table/
│
├── Lab-07-Shift-Reduce-Parsing/
├── Lab-08-Leading-Trailing/
├── Lab-09-LR0-Items/
├── Lab-10-Infix-Postfix-Prefix/
├── Lab-11-Intermediate-Code/
├── Lab-12-Code-Generator/
├── Lab-13-DAG/
├── Lab-14-Data-Flow-Analysis/
├── Lab-15-Storage-Allocation/
│
└── README.md
```

---

## 🧠 Technologies Used

* **Programming Language:** C++
* **Compiler:** GCC / G++
* **IDE:** VS Code
* **Version Control:** Git
* **Platform:** GitHub

---

## 📖 List of Experiments

### 🔹 Lab 1: Lexical Analyzer

Implementation of a lexical analyzer to identify tokens such as keywords, identifiers, operators, constants, and symbols.

### 🔹 Lab 2: Regular Expression to NFA

Conversion of a regular expression into an equivalent **NFA** using standard construction techniques.

### 🔹 Lab 3: NFA to DFA Conversion

Implementation of **subset construction algorithm** to convert NFA into DFA.

### 🔹 Lab 4: Elimination of Left Recursion

Transforms a grammar to eliminate left recursion for top-down parsing compatibility.

### 🔹 Lab 5: FIRST and FOLLOW Sets

Computes FIRST and FOLLOW sets used in syntax analysis.

### 🔹 Lab 6: Predictive Parsing Table

Construction of LL(1) parsing table using FIRST and FOLLOW sets.

---

## 🚀 Advanced Experiments (Lab 7 – Lab 15)

### 🔹 Lab 7: Shift Reduce Parsing

Implementation of bottom-up parsing using stack operations (shift and reduce).

### 🔹 Lab 8: LEADING and TRAILING

Computation of LEADING and TRAILING sets using iterative grammar analysis.

### 🔹 Lab 9: LR(0) Items

Construction of LR(0) items and closure computation.

### 🔹 Lab 10: Infix to Postfix and Prefix

Expression conversion using operator precedence and stack-based parsing.

### 🔹 Lab 11: Intermediate Code Generation

Generation of:

* Three Address Code
* Quadruple
* Triple
* Indirect Triple

### 🔹 Lab 12: Simple Code Generator

Basic assembly-like code generation using register allocation.

### 🔹 Lab 13: Directed Acyclic Graph (DAG)

Representation of expressions and elimination of common subexpressions.

### 🔹 Lab 14: Global Data Flow Analysis

Implementation of reaching definitions using:

* GEN and KILL sets
* Iterative IN and OUT computation

### 🔹 Lab 15: Storage Allocation Strategies

Simulation of memory allocation (stack-based allocation).

---

## ▶️ How to Run the Programs

1. Navigate to the required lab folder
2. Compile the program:

   ```bash
   g++ filename.cpp -o output
   ```
3. Run the program:

   ```bash
   ./output
   ```
4. Provide input as specified in the respective lab README

---

## 📌 Notes

* All experiments follow standard **Compiler Design Lab syllabus**
* Proper **logic-based implementations** are included (not just output printing)
* Each lab contains **sample input/output for verification**
* Programs are written to be **simple, readable, and viva-friendly**

---

## 🎯 Learning Outcomes

* Understanding lexical and syntax analysis
* Designing parsers (LL(1), LR)
* Intermediate code representation techniques
* Code optimization using DAG
* Data flow analysis concepts
* Memory allocation strategies

---

## 🎓 Author

**Ayush Raj**
RA2311003050162

Course: Compiler Design
Type: Laboratory Experiments
