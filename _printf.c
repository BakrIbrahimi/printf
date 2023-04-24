#include "main.h"

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
			_if(args, format[i], &len);
		}
		else
			len = len + _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
