#include "main.h"
/**
 * h_Integer - Function helper to print integers.
 * @n: integer value.
 * Return: The number of characters printed.
 */
int h_Integer(int n)
{
	int len = 0;

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		n = 147483648;
		len += 2;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}
	if (n / 10)
	{
		len += h_Integer(n / 10);
	}

	_putchar((n % 10) + '0');
	len++;

	return (len);
}
/**
 * print_integer - Prints an integer.
 * @arg: The argument list containing the integer to be printed
 * Return: The number of	 characters printed
 */

int print_integer(va_list arg)
{
	int n = va_arg(arg, int);

	return (h_Integer(n));
}
