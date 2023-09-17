#ifndef PRINTF_H
#ifndef PRINTF_H
#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct formats - Struct formats
 *
 * @f: The specifier.
 * @print: The function associated.
#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct formats - Struct formats
 *
 * @f: The specifier.
 * @print: The function associated.
 */

struct formats
{
	char *f;
#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

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

#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>

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
int print_char(va_list arg);
