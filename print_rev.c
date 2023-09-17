#include "main.h"
/**
 * print_rev - print the reverse of the current va_list
 * @arg: va_list to print
 * 
*/
int print_rev(va_list arg)
{
	char *str;
	int len;

	str = va_arg(arg, char *);
	len = reverse(str);
	return (len);
}
