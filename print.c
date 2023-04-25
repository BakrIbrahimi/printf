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
	else if (type == 'o')
		(*len) = (*len) + print_octal(va_arg(args, int));
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
	else if (type == 'x')
		_hexalower(va_arg(args, unsigned int), len);
	else if (type == 'X')
		_hexaupper(va_arg(args, unsigned int), len);
	else if (type == 'S')
		*len += _non_printable(va_arg(args, char *));
	else if (type == 'p')
	{
		void *p = va_arg(args, void *);

		if (!p)
			*len += _puts("(nil)");
		else
		{
			(*len) += _puts("0x");
			_hexalower((unsigned long)p, len);
		}
	}
	else
	{
		(*len) = (*len) + _putchar('%');
		(*len) = (*len) + _putchar(type);
	}
}
