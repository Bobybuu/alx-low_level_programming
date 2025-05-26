````markdown
# 0x05. C - Pointers, Arrays and Strings

## 📚 Learning Objectives

By the end of this project, you should be able to:

- Explain what a pointer is and how to use it
- Understand the relationship between arrays and pointers
- Use pointer arithmetic to access and manipulate data
- Distinguish between passing by value and passing by reference
- Understand how strings are represented in memory
- Apply pointers in function arguments
- Use and manipulate arrays and strings in C

---

## 🔑 Key Concepts

### 🧠 Pointers

- A **pointer** is a variable that stores the **memory address** of another variable.
- Use `*` to declare and dereference pointers.
- Use `&` to get the address of a variable.

```c
int n = 98;
int *p = &n;
*p = 402;  // changes value of n to 402
````

### 🧠 Arrays

* An array is a block of memory for storing multiple values of the same type.
* Arrays and pointers are closely related.
* `a[i]` is equivalent to `*(a + i)`

```c
int a[5] = {1, 2, 3, 4, 5};
printf("%d\n", *(a + 2));  // outputs 3
```

### 🧠 Strings

* Strings are arrays of characters ending with `'\0'` (null terminator).
* Strings can be manipulated using character pointers or array syntax.

```c
char s[] = "Hello";
printf("%s\n", s);  // prints Hello
```

---

## 🧮 Pointer Arithmetic

* Moving a pointer with `p++` advances it by the size of its type.
* Useful when iterating through arrays or strings.

```c
while (*p != '\0') {
    _putchar(*p);
    p++;
}
```

---

## 🧪 Passing Pointers to Functions

* Functions can modify values directly when passed a pointer.
* This enables "pass by reference" behavior in C.

```c
void update(int *n) {
    *n = 402;
}
```

---

## 📘 Summary Table

| Concept         | Example            | Meaning                         |
| --------------- | ------------------ | ------------------------------- |
| Declare pointer | `int *p;`          | `p` points to an int            |
| Address of var  | `p = &n;`          | `p` stores address of `n`       |
| Dereferencing   | `*p = 402;`        | Updates value at address `p`    |
| Array access    | `a[i]`, `*(a + i)` | Accesses array elements         |
| String pointer  | `char *s = "Hi";`  | Pointer to first char of string |

---

## 💻 Project Files

Each file demonstrates a specific concept:

* `0-reset_to_98.c` – Use pointer to update value
* `1-swap.c` – Swap values using pointers
* `2-strlen.c` – Implement `strlen()` using pointer traversal
* `3-puts.c` – Print string with `_putchar`
* `4-print_rev.c` – Print string in reverse using pointer
* `5-rev_string.c` – Reverse a string in-place
* `6-puts2.c` – Print every other character
* `7-puts_half.c` – Print second half of a string
* `8-print_array.c` – Print array elements
* `9-strcpy.c` – Copy string like `strcpy()`

---

## 🚀 How to Compile

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o pointer_demo
```

---

## 🧠 Recommended Practice

* Draw memory layouts to visualize pointer relationships
* Trace pointer operations line by line
* Practice modifying arrays and strings using only pointers
* Build functions that manipulate data through pointer arguments

---

## 🧩 Resources

* [Pointers in C – GeeksforGeeks](https://www.geeksforgeeks.org/pointers-in-c/)
* [C Programming - Arrays and Pointers](https://www.learn-c.org/en/Pointers)
* `man strlen`, `man strcpy`, `man sizeof`

---

## 🧑‍💻 Author

Project by Chrispin Odiwuor
For ALX Low-Level Programming Track

---

```

---

```
