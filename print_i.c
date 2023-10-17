#include "main.h"

/**
 * print_int - function that prints an integer
 * @args: arguments to be printed
 * Return: length of characters
 */

int print_int(va_list args)
{
	int a = va_args(args, int);
	int n, last = a % 10, digit, exp = 1;
	int i = 1;

	a = a / 10;
	n = a;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		a = -a;
		last = -last;
		i++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			exp = exp * 10;
			n = n / 10;
		}
		n = a;
		while (exp > 0)
		{
			digit = n / exp;
			_putchar(digit + '0');
			n = n - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

#include "main.h"

/**
 * print_decim - function that prints an integer
 * @args: arguments to be printed
 * Return: length of characters
 */

int print_decim(va_list args)
{
	int a = va_args(args, int);
	int n, last = a % 10, digit, exp = 1;
	int i = 1;

	a = a / 10;
	n = a;

	if (last < 0)
	{
		_putchar('-');
		n = -n;
		a = -a;
		last = -last;
		i++;
	}
	if (n > 0)
	{
		while (n / 10 != 0)
		{
			exp = exp * 10;
			n = n / 10;
		}
		n = a;
		while (exp > 0)
		{
			digit = n / exp;
			_putchar(digit + '0');
			n = n - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
