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
							{"%x", print_hex}, {"%X", print_HEX},
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
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("Could you print some non-prntable characters?\n%S\nThanks!\n", "Sure:\x1F\x7F\n");
	printf("\n \n");
	len2 = printf("Could you print some non-prntable characters?\nSure:\\x1F\\x7F\\x0A\nThanks!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}