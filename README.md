# C Syntax Checker and Code Analyzer

A **C-based static code analysis tool** that reads a C source file and performs structural and syntax checks.  
The program analyzes code line-by-line and reports information about **keywords, functions, variables, brackets, and basic syntax errors**.

This project demonstrates **file processing, string parsing, and basic compiler-like analysis techniques in C**.

---

## Features

The analyzer performs the following checks on a C program:

- Counts **total lines of code**
- Detects **C keywords with line numbers**
- Counts **built-in functions used**
- Counts **total functions including `main()`**
- Checks **function prototypes**
- Counts **variables by data type**
- Calculates **memory used by variables**
- Detects **bracket mismatches** (`{}`, `()`, `[]`)
- Performs **basic syntax validation** for:
  - `printf`
  - `scanf`
  - `gets`
  - `puts`
  - `fprintf`
  - `fscanf`
  - `for` loops
  - `while` loops
- Writes formatted program data to **`output.txt`**

---

## Technologies Used

**Language**
- C

**Concepts**
- File Handling
- Structures
- String Manipulation
- Arrays
- Pointers & Dynamic Memory Allocation
- Modular Programming (Functions)
- Basic Code Parsing

---

## Project Structure
syntax-checker/
│
├── syntax_checker.c
├── input.txt
├── output.txt
└── README.md


| File | Description |
|-----|-------------|
| `syntax_checker.c` | Main program implementing code analysis |
| `input.txt` | C program to be analyzed |
| `output.txt` | Generated formatted output |

---

## How It Works

1. The program reads a C source file **line by line** using file handling.
2. Each line is stored in a **structure containing line number, length, and text**.
3. The analyzer runs multiple modules to examine the code:
   - Bracket matching
   - Keyword detection
   - Built-in function counting
   - Function and prototype detection
   - Variable counting
   - Syntax validation
4. Results are printed on the **console** and written to **`output.txt`**.

---

## Example Output
BRACKET CHECK
line 14: { is greater

KEYWORDS
Line 3: int
Line 5: for

TOTAL BUILTIN FUNCTIONS
printf : 3
scanf : 1

VARIABLE COUNTS
int: 4
char: 1

MEMORY USED
int: 16 bytes
char: 1 byte


---

## How to Run

1. Compile the program:
```bash
gcc syntax_checker.c -o syntax_checker
```
2. Run the program: ```bash ./syntax_checker ```
3. Make sure the C source file to analyze is placed in input.txt.



---
## Learning Outcomes

-This project demonstrates:
-File handling in C
-String parsing and token detection
-Basic static code analysis
-Syntax pattern validation
-Modular program design


---

## Future Improvements

-Possible improvements for the project:
-Support multi-line comments (/* */)
-Detect unused variables
-Generate detailed syntax error reports
-Add GUI interface
-Support analysis for multiple files

---
## Author

Khushpreet Kaur
Computer Science Student
GitHub: https://github.com/KhushpreetKaur10
