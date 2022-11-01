# C - printf project

## Introduction
For this project, I made my own version of the function printf. The function `int printf(const char *format, ...)` sends formatted output to stdout. printf can be accessed by including the stdio.h header file. This repository contains the code necessary for my `_printf` function to run successfully. This function handles the following conversion specifiers: `c`, `s`, `%`, `d`, `i`. 

## Files

### \_printf.c
This contains the function `_printf.c`, which uses the prototype `int _printf(const char *format, ...)`.

### main.h
Contains the necessary libraries and all function prototypes for `_printf`.

### man\_3\_printf
The manual page for the `_printf` function.

### printf\_functions
Contains the following functions:
- `int _putchar(char c);`
- `int print_c(va_list c);`
- `int print_s(va_list s);`
- `int print_d(va_list d);`
- `int print_i(va_list i);`
- `typedef struct format`

## Requirements
- Compile command: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`
- Prototypes of the functions should be included in the header file `main.h`

## Authorized functions and macros
- `write`
- `malloc`
- `free`
- `va_start`
- `va_end`
- `va_copy`
- `va_arg`

## Tasks

### 0. I'm not going anywhere.
Write a function that produces output according to a format.
- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- Write output to stdout, the standard output stream
- `format` is a character string. The format string is composed of zero or more directives. Need to handle the following conversion specifiers: `c`, `s`, `%`
- You don't have to reproduce the buffer handling of the C library `printf` function
- You don't have to handle the flag characters
- You don't have to handle field width
- You don't have to handle precision
- You don't have to handle the length modifiers

### 1. Education is when you read the fine print.
Handle the following conversion specifiers:
- `d`
- `i`
- You don't have to handle the flag characters
- You don't have to handle field width
- You don't have to handle precision
- You don't have to handle the length modifiers

### 2. Just because it's in print doesn't mean it's the gospel
Create a man page for your function.
