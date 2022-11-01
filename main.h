#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/* Functions */
int _putchar(char c);
int (*check(const char *format))(va_list);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);

/**
* struct format - printf type with print function, contains va_list
* @type: print type
* @f: associated function
*/

typedef struct format
{
	char *type;
	int (*f)(va_list);
} print_format;

#endif /* MAIN_H */
