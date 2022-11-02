#include "main.h"

/**
* check - takes format, returns a pointer
* @format: format specifier
* Return: Pointer Valid or NULL
*/

int (*check(const char *format))(va_list)
{
	unsigned int i;
	print_format print_class[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_di},
		{"d", print_di},
		{NULL, NULL}
	};

	for (i = 0; print_class[i].type != NULL; i++)
	{
		if (*(print_class[i].type) == *format)
		{
			break;
		}
	}
	return (print_class[i].f);
}

/**
* _printf - prints anything
* @format: format specifier
* Return: count of characters
*/

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		for (i = i; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		func = check(&format[i + 1]);
		if (func != NULL)
		{
			count += func(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(ap);
	return (count);
}
