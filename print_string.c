#include "main.h"
/**
 * print_string - print a string representation
 * @arg: string to print
 * Return: string representation
*/
int print_string(va_list arg)
{
	char *str;
	int len = 0;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(null)";
		return (_puts(str));
	}
	else
		len = _puts(str);

	return (len);
}
