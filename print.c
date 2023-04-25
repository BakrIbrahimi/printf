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
		(*len) += _putchar('%');
	else if (type == 'c')
		(*len) += _putchar(va_arg(args, int));
	else if (type == 's')
		(*len) += _puts(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		(*len) += _putnumber(va_arg(args, int));
	else
		(*len) += _putchar(type);
}
