#include "main.h"

/**
 * _printf - print formatted string
 * @format: the formatted string
 *
 * Return: the string length
 */
int	_printf(const char *format, ...)
{
	int		i;
	va_list	pr;

	i = 0;
	va_start(pr, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (i);
			print(*format, pr, &i);
		}
		else
		{
			_putchar(*format);
			i++;
		}
		format++;
	}
	va_end(pr);
	return (i);
}
