#include "main.h"
/**
 * print_binary - print binary information
 * @arg: a pointer to a binary
 * Return: a pointer to
*/
int print_binary(va_list arg)
{
	unsigned int n;
	char arr[100];
	int num = 0;

	n = va_arg(arg, unsigned int);
	if (n == 0)
	{
		_putchar(48);
		num++;
		return (num);
	}

	for (; n > 0; n = n / 2)
	{
		arr[num] = (n % 2) + 48;
		num++;
	}
	arr[num] = '\0';
	reverse(arr);

	return (num);
}

int print_octal(va_list arg)
{
	unsigned int n;
    char arr[100];
    int num = 0;

    n = va_arg(arg, unsigned int);

    if (n == 0)
    {
        _putchar(48);
        num++;
        return (num);
    }

    for (; n > 0; n = n / 8)
    {
        arr[num] = (n % 8) + 48;
        num++;
    }
    arr[num] = '\0';
    reverse(arr);

    return (num);
}