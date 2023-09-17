#include "main.h"
int print_rev(va_list arg)
{
	char *str;
	int len;

	str = va_arg(arg, char *);
	len = reverse(str);
	return (len);
}
