#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: the character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_c - function
* @c: char
* Return: 1
*/
int print_c(va_list c)
{
	int a = va_arg(c, int);

	_putchar(a);
	return (1);
}

/**
* print_s - function
* @s: string
* Return: number of characters
*/
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *)

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
		_putchar(str[count]);
	
	return (count);
}
