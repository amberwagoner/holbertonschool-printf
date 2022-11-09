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
* Return: number of chars printed
*/
int print_c(va_list c)
{
	unsigned int a = 0;

	if (!c)
		return (0);

	_putchar((char)va_arg(c, int));
	a++;

	return (a);
}

/**
* print_s - function
* @s: string
* Return: length of string
*/
int print_s(va_list s)
{
	unsigned int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
		_putchar(str[count]);
	return (count);
}

/**
 * print_di - writes the integer di to stdout
 * @di: The integer to print out
 * Return: integer length count on success.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_di(va_list di)
{
	unsigned int count = 0, i;
	int val = va_arg(di, int), divider = 1;
	char intmin[11] = {"-2147483648"};

	if (v == INT_MIN)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(intmin[i]);
			count++;
		}
		return (count);
	}

	if (val < 0)
	{
		_putchar('-');
		val = -val;
		count++;
	}

	while ((val / divider) > 9)
	{
		divider *= 10;
	}

	while (divider >= 1)
	{
		_putchar((val / divider) + '0');
		val = val % divider;
		divider /= 10;
		count++;
	}

	return (count);
}
