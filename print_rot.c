#include "main.h"

/**
 * print_rot - print rot13.
 * @arg: string to print.
 * Return: length.
*/

int print_rot(va_list arg)
{
	char *s = va_arg(arg, char *);
	char c;
	int i = -1, j = -1, len = 0;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
	{
		s = "(null)";
		len += _puts(s);
		return (len);
	}

	while (s[++i] != '\0')
	{
		c = s[i];
		j = -1;
		while (arr1[++j] != '\0')
		{
			if (c == arr1[j])
			{
				c = arr2[j];
				break;
			}
		}
		len += _putchar(c);
	}

	return (len);
}
