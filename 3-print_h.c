#include "main.h"

/**
 * print_hex - function to print character
 * @args: arguments
 * Return: usually 1
 */

int print_hex(va_list args)
{
	int i, count = 0;
	int *arr;
	unsigned int t = n
	unsigned int n = va_arg(args, unsigned int);

	while (n / 16 != 0)
	{
		n = n / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		arr[i] = t % 16;
		t = t / 16;
	}
	for (i = count - 1; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}
