---

# 0x04. C - More Functions, More Nested Loops

## 📘 Learning Objectives

By the end of this project, you should be able to explain the following concepts and apply them in C programming:

### ✅ General

* What are nested loops and how to use them effectively.
* How to use functions to organize and reuse code.
* The difference between a **function declaration** and a **function definition**.
* What is a function **prototype** and why it’s important.
* The **scope of variables**: local vs global.
* Meaning and usage of common `gcc` compilation flags:

  * `-Wall`: enables all the basic warnings
  * `-Werror`: treats all warnings as errors
  * `-Wextra`: enables extra warnings
  * `-pedantic`: enforces strict ISO C standards
  * `-std=gnu89`: compiles using the GNU89 standard
* How to use **header files** and `#include` to organize your code in multiple files.

---

## 🔁 Key Concepts Covered

### 🌀 Nested Loops

* A loop inside another loop.
* Useful when dealing with grids, matrices, or patterns.

```c
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        printf("* ");
    }
    printf("\n");
}
```

### 🧠 Functions

* A reusable block of code that performs a task.
* Syntax:

  ```c
  int sum(int a, int b) {
      return a + b;
  }
  ```

### 📌 Declaration vs Definition

* **Declaration**: Tells the compiler that a function exists (usually in header files).

  ```c
  int sum(int, int); // Declaration
  ```
* **Definition**: Contains the actual implementation.

  ```c
  int sum(int a, int b) { return a + b; } // Definition
  ```

### 📄 Header Files

* Used to declare function prototypes and share common declarations across files.
* Included using:

  ```c
  #include "main.h"
  ```

---

## 🛠️ Compilation

Use the following flags to compile your code as per ALX standards:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 file.c -o output
```

---

## 📂 File Structure Example

```
0x04-more_functions_nested_loops/
│
├── main.h                # Header file with function prototypes
├── 0-isupper.c           # Checks for uppercase character
├── 1-isdigit.c           # Checks for digit (0-9)
├── 2-mul.c               # Multiplies two integers
├── 3-print_numbers.c     # Prints numbers 0 to 9
├── ...
└── README.md             # Project documentation
```

---
