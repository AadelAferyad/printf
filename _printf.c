#include "main.h"
/**
 * _printf - printf function for printing.
 * @format: printf format.
 * Return: int length of the inpue.
*/
int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer}, {"%u", print_unsigned},
							{"%b", print_binary}, {"%o", print_octal}, {"%S", print_S},
							{"%x", print_hex}, {"%X", print_HEX}, {"%p", print_address},
							{"%r", print_rev}, {"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
/**
 * fun_helper - helper function for printingd.
 * @format: string.
 * @arg: string.
 * @format_redear: string.
 * Return: Integer representation.
*/
int fun_helper(const char *format, va_list arg, struct formats *format_redear)
{
	int i = -1, j = 0, len = 0, k;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[++i])
	{
		j = 0, k = 0;
		if (format[i] == 37) /* % yd */
		{
			if (format[i + 1] == 32 || format[i + 1] == 9) /*%   %*/
				i++, len++;
			if (format[i + 1] == 37) /* printf "%%" */
			{
				i += 1, len += _putchar(format[i]);
				continue;
			}
			if (format[i + 1] == '\0') /*"%  %" */
			{
				len = _putchar(format[i]);
				return (len);
			}
			if (format[i + 1] == '+') /*"%+d"*/
			{
				i++;
				len += plus_flag(arg, format + i);
				_putchar(format[i + 2]);
				break;
			}
			while (format_redear[j].f) /* %   yd*/
			{
				if (format[i + 1] == format_redear[j].f[1])
				{
					len += format_redear[j].print(arg), i++, k = 1;
					break;
				}
				else
					j++;
			}
			if (!k)
				len += _putchar(format[i]);
		}
		else
			len += _putchar(format[i]);
	}
	va_end(arg);
	return (len);
}
