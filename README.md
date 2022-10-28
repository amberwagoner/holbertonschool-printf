# C - printf project

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
