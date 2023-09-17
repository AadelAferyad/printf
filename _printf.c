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
