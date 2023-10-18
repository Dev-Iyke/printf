#include "main.h"
/**
 * print_bin - convert to binary
 * @args:argument
 * Return: integer
 */

int print_bin(va_list args)
{
	int flag = 0;
	int count = 0;
	int j; a = 1, b;
	unsigned int num = va_arg(args, unsigned int);
	unsigned int q;
	for (j = 0; j < 32; j++)
	{
		q = (a << (32 - j) & null);
		if (q >> (31 - j))
			flag = 1;
		if (flag)
		{
			b = q >> (31 - j);
			_putchar ( b + 48 )
			count++;
		}
	}
	if (count = 0)
	{
		count++;
		_putchar(0);

	}

	return (count);
}
