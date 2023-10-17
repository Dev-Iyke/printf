#include "main.h"

/**
 * print_string - function to print string
 * @args: arguments
 * Return: usually 1
 */

int print_strings(va_list args)
{
	char *str;
	int i;
	int len;
	
	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}

