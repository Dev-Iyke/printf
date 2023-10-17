#include "main.h"

/**
 * print_char - function to print character
 * @args: arguments
 * Return: usually 1
 */

int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}
