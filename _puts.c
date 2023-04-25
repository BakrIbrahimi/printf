#include "main.h"

/**
 * _puts - Print a string
 * @str: The string to print
 *
 * Return: the string length
 */

int	_puts(char *str)
{
	int	l;

	l = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[l])
	{
		write(1, &str[l], 1);
		l++;
	}
	return (l);
}
