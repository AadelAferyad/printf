#include "main.h"

/**
 * _putchar - print a character.
 * @c: char.
 * Return: return 1 (length).
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - print a character.
 * @s: pointer to character string.
 * Return: return 1.
*/

int _puts(char *s)
{
	int i = -1;

	while (s[++i])
		_putchar(s[i]);
	return (i);
}
/**
 * reverse - print reverse array.
 * @str: pointer to int array of int.
 * Return: return length.
*/

int reverse(char *str)
{
	int i = 0, len = -1;
	char *arr = str;


	while (arr[++len])
		;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(arr[i]);
	}
	return (len);
}

int _put_HEX(char c)
{
	int len = 0;

	len += _putchar((c / 16 < 10) ? (c / 16) + '0' : (c / 16) + 55 );
	len += _putchar((c % 16 < 10) ? (c % 16) + '0' : (c % 16) + 55 );
	return (len);
}
