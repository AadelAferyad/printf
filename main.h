#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct formats - Struct formats
 *
 * @f: The specifier.
 * @print: The function associated.
 */
struct formats
{
	char *f;
	int (*print)(va_list);
};

typedef struct formats fm;

int h_Integer(int n);
int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int _put_HEX(char c);
int fun_helper(const char *format, va_list arg, struct formats *format_redear);
int reverse(char *arr);

int print_char(va_list arg);
int print_string(va_list arg);
int print_integer(va_list arg);
int print_rev(va_list arg);
int print_binary(va_list arg);
int print_octal(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_unsigned(va_list arg);
int print_S(va_list arg);
int print_rot(va_list arg);
int print_address(va_list args);

#endif /*PRINTF_H*/
