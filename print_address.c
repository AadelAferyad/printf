#include "main.h"
/**
 * print_address - print the address
 * @args: argument array
 * Return: pointer to the address
*/
int print_address(va_list args)
{
	unsigned long int var = (unsigned long int)va_arg(args, void *);
	int num;
	int done;
	int i;
	char temp;
    char *arr;

	if (var == 0)
		return (_printf("(nil)"));

	arr = malloc(30);

	if (!arr)
		return (-1);

	for (num = 0; var > 0 ; num++)
	{
		done = var % 16;
		if (done < 10)
			arr[num] = done + 48;
		else
			arr[num] = done + 87;
		var = var / 16;
	}

    /* swap */
	for (i = 0; i < num / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[num - 1 - i];
		arr[num - 1 - i] = temp;
	}
	arr[num] = '\0';
    num+=2; /*len  + 0x*/

	_printf("0x%s", arr);

	free(arr);

	return (num);
}
