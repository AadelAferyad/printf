#include "main.h"

/**
 * print_rot - print rot13.
 * @arg: string to print.
 * Return: length.
*/


int print_rot(va_list arg)
{
	int i = -1;
	char *s;

	s = va_arg(arg, char *);
	while (s[++i])
	{
		while ((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90))
		{
			if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i]  <= 'Z'))
			{
				s[i] = (int) s[i] - 13;
				i++;
				continue;
			}
			s[i] += 13;
		}
	}
	return (i);
}
