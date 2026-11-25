# Simple Calculator in C

A beginner-friendly command-line calculator written in C. It performs four basic arithmetic operations and repeats until the user exits.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Checks for division by zero
- Repeats until the user selects Exit

## Concepts Used

- Variables and data types
- Functions
- `switch` statement
- `while` loop
- User input with `scanf`
- Conditional statements

## Requirements

A C compiler such as GCC or Clang.

## How to Compile and Run

### Windows (with GCC installed)

```bash
gcc calculator.c -o calculator
calculator.exe
```

### macOS or Linux

```bash
gcc calculator.c -o calculator
./calculator
```

## Example

```text
=================================
       SIMPLE CALCULATOR
=================================

Choose an operation:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/)
5. Exit
Enter your choice: 1
Enter the first number: 12
Enter the second number: 8
Result: 20.00
```

## What I Learned

I practiced writing functions, using a menu-driven program, handling user input, and checking for division by zero.

## Future Improvements

- Add modulus for integers
- Add power and square-root operations
- Improve input validation
- Create a graphical user interface
