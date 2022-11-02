#ifndef MAIN_H
#define MAIN_H

/* Libraries */
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/* Functions */
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_di(va_list di);

/**
* struct printformat - printf type with print function, contains va_list
* @type: print type
* @f: associated function
*/

typedef struct printformat
{
	char *type;
	int (*f)(va_list);
} print_format;

#endif /* MAIN_H */
