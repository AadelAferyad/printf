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
