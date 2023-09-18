#include "main.h"




int plus_flag(va_list arg, char *format)
{
	int i, j = -1, found = 0, len = 0;

	while (format[++j])
	{
		if (format[j] == 'd')
		{
			found = 1;
			break;
		}
	}
	i = va_arg(arg, int);
	if (found && i >= 0)
	{
		len += _putchar('+');
		len += h_Integer(i);
		return(len);
	}
	else
	{
		len += h_Integer(i);
	}
	return (len);
}
