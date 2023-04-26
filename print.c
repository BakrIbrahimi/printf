#include "main.h"

/**
 * custom_specifiers - checks custom specifiers
 * @args: arguments líst
 * @type: specifier
 * @len: string length
 */

void	custom_specifiers(va_list args, char type, int *len)
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
	else if (type == 'o')
		(*len) = (*len) + print_octal(va_arg(args, int));
	else if (type == 'u')
		_unsigned_int(va_arg(args, unsigned int), len);
	else if (type == 'x')
		_hexalower(va_arg(args, unsigned int), len);
	else if (type == 'X')
		_hexaupper(va_arg(args, unsigned int), len);
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
		non_custom_specifiers(args, type, len);
}

/**
 * non_custom_specifiers- check non custom specifiers
 * @args: argument list
 * @type: specifier
 * @len: string lenght
 */

void	non_custom_specifiers(va_list args, char type, int *len)
{
	if (type == 'S')
		*len += _non_printable(va_arg(args, char *));
	else if (type == 'r')
		*len += print_rev(va_arg(args, char *));
	else if (type == 'b')
		print_binary(va_arg(args, int), len);
	else if (type == 'R')
		*len += rot13(va_arg(args, char *));
	else
	{
		(*len) = (*len) + _putchar('%');
		(*len) = (*len) + _putchar(type);
	}
}
