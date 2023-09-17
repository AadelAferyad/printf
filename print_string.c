#include "main.h"
/**
 * print_string - print a string representation
 * @arg: string to print
 * Return: string representation
*/
int print_string(va_list arg)
{
	char *str;
	int len = 0;

	str = va_arg(arg, char *);
	if (!str)
	{
		str = "(null)";
		return (_puts(str));
	}
	else
		len = _puts(str);

	return (len);
}
int print_S(va_list arg)
{
	char *haruma = va_arg(arg, char *);
	int len = 0;
	int i;

	if (!haruma)
	{
		haruma = "(null)";
		return (_puts(haruma));
	}
	for (i = 0; haruma[i] != '\0'; i++)
	{
		if (haruma[i] < 32 || haruma[i] >= 127)
		{
			len += _putchar('\\');
            len += _putchar('x');
			len += _putchar(48);
            len += _printf("%X", haruma[i]);
		}
		else
		{
            len += _putchar(haruma[i]);
        }
	}
	return (len);
}