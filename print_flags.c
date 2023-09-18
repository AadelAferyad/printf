#include "main.h"

/**
 * plus_flag - printf + flag.
 * @arg: va arg.
 * @format: printf format.
 * Return: int length of the inpue.
*/
int plus_flag(va_list arg, const char *format)
{
	int i = 0, j = 0, found = 0, len = 0;

	i = va_arg(arg, int);
	while (format[j++])
	{
		if (format[j] == 'd' || format[j] == 'i')
		{
			found++;
			break;
		}
	}
	if (found != 1)
		return (-1);
	if (i == 0)
	{
		return (_printf("+0"));
	}
	else if (i > 0)
	{
		len += _putchar('+');
		len += _printf("%d", i);
		return (len);
	}
	else
	{
		len += _printf("%d", i);
	}
	return (len);
}
/**
 * hashtag_flag - printf # flag.
 * @arg: va arg.
 * @format: printf format.
 * Return: int length of the inpue.
*/
int hashtag_flag(va_list arg, const char *format)
{
	int i = 0, j = 0, found = 0, len = 0;

	i = va_arg(arg, int);

	while (format[j])
	{
		if (format[j++] == 'x')
		{
			found = 1;
			break;
		}
		else if (format[j] == 'o')
		{
			found = 2;
			break;
		}
		else if (format[j] == 'X')
		{
			found = 3;
			break;
		}
	}
	if (found != 1)
		return (-1);
	else if (found == 1)
	{
		len += _printf("0x");
		len += _printf("%x", i);
	}
	else if (found == 2)
	{
		len += _printf("0");
		len += _printf("%o", i);
	}
	else if (found == 3)
	{
		len += _printf("0x");
		len += _printf("%X", i);
	}
	return (len);
}
