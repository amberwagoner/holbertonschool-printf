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
	unsigned int a = 0;

	if (!c)
		return (0);

	_putchar(va_arg(c, int));
	a++;

	return (a);
}

/**
* print_s - function
* @s: string
* Return: number of characters
*/
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count]; count++)
		_putchar(str[count]);
	return (count);
}

/**
* print_i - function
* @i: integer
* Description: prints an integer
* Return: number chars and digits
*/
int print_i(va_list i)
{
	int t[10];
	int var1, op1, f, sum, count;

	f = va_arg(i, int);
	count = 0;
	op1 = 1000000000;
	t[0] = f / op1;
	for (var1 = 1; var1 < 10; var1++)
	{
		op1 /= 10;
		t[var1] = (f / op1) % 10;
	}
	if (f < 0)
	{
		_putchar('-');
		count++;
		for (var1 = 0; var1 < 10; var1++)
			t[var1] *= -1;
	}
	for (var1 = 0, sum = 0; var1 < 10; var1++)
	{
		sum += t[var1];
		if (sum != 0 || var1 == 9)
		{
			_putchar('0' + t[var1]);
			count++;
		}
	}
	return (count);
}

/**
* print_d - Function
* @d: Integer
* Description: Prints an Decimal
* Return: Number Chars and Cigits
*/
int print_d(va_list d)
{
	int t[10];
	int var1, op1, f, sum, count;

	f = va_arg(d, int);
	count = 0;
	op1 = 1000000000;
	t[0] = f / op1;
	for (var1 = 1; var1 < 10; var1++)
	{
		op1 /= 10;
		t[var1] = (f / op1) % 10;
	}
	if (f < 0)
	{
		_putchar('-');
		count++;
		for (var1 = 0; var1 < 10; var1++)
			t[var1] *= -1;
	}
	for (var1 = 0, sum = 0; var1 < 10; var1++)
	{
		sum += t[var1];
		if (sum != 0 || var1 == 9)
		{
			_putchar('0' + t[var1]);
			count++;
		}
	}
	return (count);
}
