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
	if (c == '%')
		(*i) += _putchar('%');
	else if (c == 'c')
		(*i) += _putchar(va_arg(pr, int));
	else if (c == 's')
		(*i) += _putstr(va_arg(pr, char *));
	else
		(*i) += ft_putchar(c);
}
