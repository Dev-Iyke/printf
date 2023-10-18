#include "main.h"

/**
 * print_octal - function to print octal numbers
 * @args: arguments
 * Return: usually 1
 */

int print_octal(va_list args)
{
	int i, count = 0;
	int *arr;
	unsigned int t = n
	unsigned int n = va_arg(args, unsigned int);

	while (n / 8 != 0)
	{
		n = n / 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		arr[i] = t % 8;
		t = t / 8;
	}
	for (i = count - 1; i >= 0; i++)
		_putchar(arr[i] + '0');
	free(arr);
	return (count);
}
