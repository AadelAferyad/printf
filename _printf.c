#include "main.h"
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
/**
 * fun_helper - helper function for printingd
 * @format: string
 * @arg: string
 * @format_redear: string
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
/**
 * fun_helper - helper function for printingd
 * @format: string
 * @arg: string
 * @format_redear: string
 * Return: Integer representation
*/

int fun_helper(const char *format, va_list arg, struct formats *format_redear)
{
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
/**
 * fun_helper - helper function for printingd
 * @format: string
 * @arg: string
 * @format_redear: string
 * Return: Integer representation
*/

int fun_helper(const char *format, va_list arg, struct formats *format_redear)
{
	int i = -1, j = 0, len = 0, k;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[++i])
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
/**
 * fun_helper - helper function for printingd
 * @format: string
 * @arg: string
 * @format_redear: string
 * Return: Integer representation
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
#include "main.h"
/**
 * _printf - printf function for printing
 * @format: printf format
 * Return: int length of the inpue.
*/

int _printf(const char *format, ...)
{
	fm format_redear[] = {{"%c", print_char}, {"%s", print_string},
							{"%d", print_integer}, {"%i", print_integer},
							{"%b", print_binary}, {"%r", print_rev},
							{"%R", print_rot}, {NULL, NULL}};
	va_list arg;
	int len = 0;

	va_start(arg, format);
	len = fun_helper(format, arg, format_redear);

	return (len); /*removed (len - 1)*/
}
/**
 * fun_helper - helper function for printingd
 * @format: string
 * @arg: string
 * @format_redear: string
 * Return: Integer representation
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
