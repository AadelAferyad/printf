#include "main.h"
/**
 * print_char - print a character
 * @arg: char to print
 * Return: 1 (length).
*/
int print_char(va_list arg)
{
	char str;

	str = va_arg(arg, int);
	_putchar(str);
	return (1);
}
