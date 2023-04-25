#include "main.h"

/**
 * flags - check flags
 * @type: specifier
 * @len: string lenght
 *
 * Return: 1 if puts something, 0 if not
 */
/**
 * flags - check flags
 * @type: specifier
 * @len: string lenght
 *
 * Return: 1 if puts something, 0 if not
 */
int	flags(const char *type, int *len)
{
	if (*type == ' ')
	{
		*len += _putchar(' ');
		return (1);
	}
	else if (*type == '+')
	{
		*len += _putchar('+');
		return (1);
	}
	else if (*type == '#')
	{
		if (*(type + 1) == 'o')
			*len = _putchar('0');
		if (*(type + 1) == 'x' || *(type + 1) == 'X')
			*len = _printf("0x");
		return (1);
	}
	return (0);
}

/**
 * _printf - print formatted string
 * @format: the formatted string
 *
 * Return: the string length
 */
int	_printf(const char *format, ...)
{
	int	i;
	int	len;
	va_list	args;

	i = 0;
	len = 0;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (flags(&format[i], &len))
				i++;
			print(args, format[i], &len);
		}
		else
			len = len + _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
