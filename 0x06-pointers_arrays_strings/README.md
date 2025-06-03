---

# 📌 0x06. C - Pointers, Arrays, and Strings

Welcome to the sixth project of the ALX C programming curriculum. In this module, I learned how to manipulate strings and arrays in C using pointers, and implemented several standard library-like functions from scratch.

---

## 🧠 Key Concepts Covered

* What are pointers and how to use them
* How to manipulate arrays and strings with pointers
* String concatenation using `_strcat` and `_strncat`
* String copy with `_strncpy`
* String comparison with `_strcmp`
* In-place reversal of arrays
* Changing characters in strings (uppercasing, capitalization, leet encoding)
* Basic string encoding using ROT13
* Printing integers with `_putchar` only
* Infinite addition of very large numbers represented as strings
* Buffer inspection and printing formatted memory views

---

## 📂 File Descriptions

| File                 | Description                                                                              |
| -------------------- | ---------------------------------------------------------------------------------------- |
| `0-strcat.c`         | Concatenates two strings like `strcat`                                                   |
| `1-strncat.c`        | Concatenates two strings with byte limit like `strncat`                                  |
| `2-strncpy.c`        | Copies a string with byte limit like `strncpy`                                           |
| `3-strcmp.c`         | Compares two strings like `strcmp`                                                       |
| `4-rev_array.c`      | Reverses an array of integers                                                            |
| `5-string_toupper.c` | Converts lowercase letters in a string to uppercase                                      |
| `6-cap_string.c`     | Capitalizes all words in a string                                                        |
| `7-leet.c`           | Encodes a string into 1337 (leet) format                                                 |
| `100-rot13.c`        | Encodes a string using ROT13                                                             |
| `101-print_number.c` | Prints integers using `_putchar` only                                                    |
| `102-magic.c`        | Demonstrates pointer arithmetic to access array elements without using the variable name |
| `103-infinite_add.c` | Adds two large numbers represented as strings                                            |
| `104-print_buffer.c` | Prints buffer content in formatted hex dump style                                        |

---

## 🧪 How to Compile & Run

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 main.c <filename>.c -o output
./output
```

Example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
./0-strcat
```

---

## 📈 Skills Practiced

* Mastery of pointer arithmetic
* String manipulation without using standard library functions
* Careful use of memory and buffer sizes
* Handling edge cases in string processing
* Writing robust, low-level C functions from scratch

---
