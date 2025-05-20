
---

# 0x03. C - Debugging

## Description

This project focuses on understanding and applying **debugging** techniques in C. Debugging is the process of identifying and fixing errors (bugs) in a program to ensure it behaves as expected. Throughout the tasks, you’ll learn how to analyze errors, manually debug code, and prevent issues such as infinite loops and incorrect outputs.

The key skills developed include:

* Understanding the structure of a C program
* Using header files properly
* Fixing logical errors in conditional statements
* Identifying and commenting out problematic code without deleting it
* Correctly handling leap years in date-based calculations

## Learning Objectives

At the end of this project, you should be able to:

* Explain what debugging is and why it's important
* Identify and fix common logical and runtime errors in C
* Interpret compiler error messages
* Manually debug using print statements and logical tracing
* Understand how leap years affect calendar-based calculations

## Requirements

* All code compiled on Ubuntu 20.04 LTS using `gcc` with the flags:
  `-Wall -Werror -Wextra -pedantic -std=gnu89`
* Code must follow **Betty coding style**
* Must include appropriate header files (`main.h`)
* No use of global variables unless specified
* No code should be copied — original work is required

## Tasks Overview

### Task 0: Multiple mains

* Create a test file `0-main.c` to test the function `positive_or_negative()` with the value `0`.

### Task 1: Like, comment, subscribe

* Debug an infinite loop by **commenting out** the code causing the issue without deleting any lines.

### Task 2: 0 > 972?

* Fix a function that determines the largest of three integers, correcting logical errors in the conditionals.

### Task 3: Leap year

* Update the `print_remaining_days()` function to correctly handle **leap years**, including the case for February 29.

## Files

* `main.h` — Header file containing function prototypes
* `0-main.c` — Test file for checking zero input
* `1-main.c` — Contains code with an infinite loop to be debugged
* `2-largest_number.c` — Fix logic to correctly identify the largest number
* `3-print_remaining_days.c` — Fix leap year handling logic
* `3-convert_day.c` — Helper function to convert day of month to day of year
* `README.md` — This file, describing the project

## Resources

* [Debugging](https://en.wikipedia.org/wiki/Debugging)
* [Rubber Duck Debugging](https://rubberduckdebugging.com/)

---
