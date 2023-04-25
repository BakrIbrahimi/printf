#include "main.h"

/**
 * print - checks specifiers
 * @args: arguments líst
 * @type: specifier
 * @len: string length
 *
 * Return: void
 */

void	print(va_list args, char type, int *len)
{
	if (type == '%')
	{
		_putchar('%');
		(*len)++;
	}
	else if (type == 'c')
		(*len) += _putchar(va_arg(args, int));
	else if (type == 's')
		(*len) += _puts(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		print_num(va_arg(args, int), len);
	else if (type == 'b')
		print_binary(va_arg(args, int), len);
	else
		print2(args, type, len);
}

/**
 * print2 - checks specifiers
 * @args: arguments líst
 * @type: specifier
 * @len: string length
 *
 * Return: void
 */

void	print2(va_list args, char type, int *len)
{
	if (type == 'u')
		_unsigned_int(va_arg(args, unsigned int), len);
	else
	{
		(*len) = (*len) + _putchar('%');
		(*len) = (*len) + _putchar(type);
	}
}
