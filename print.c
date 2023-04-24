#include "main.h"

/**
 * print - checks specifiers
 * @pr: arguments líst
 * @c: specifier
 * @i: string length
 *
 * Return: void
 */

void print(char c, va_list pr, int *i)
{
	if (c == '%')
		(*i) += _putchar('%');
	else if (c == 'c')
		(*i) += _putchar(va_arg(pr, int));
	else if (c == 's')
		(*i) += _putstr(va_arg(pr, char *));
	else if (c == 'd')
		(*i) += _putnumber(va_arg(pr, int));
	else
		(*i) += _putchar(c);
}
