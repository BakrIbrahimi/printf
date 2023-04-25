#include "main.h"

/**
 * print_octal - prints octal number
 * @num: the number
 * Return: lenght of number printed
 */

int	print_octal(unsigned int num)
{
	int		r;
	int		i;
	int		len;
	int		*s;
	unsigned int	temp;

	i = 0;
	len = 0;
	temp = num;
	while (temp / 8 != 0)
	{
		temp = temp / 8;
		len++;
	}
	len++;
	s = malloc(len * sizeof(int));
	if (!s)
		return (-1);
	while (i < len)
	{
		r = num % 8;
		s[i++] = r;
		num = num / 8;
	}
	i = 0;
	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[(len - i - 1)];
		s[(len - i - 1)] = temp;
		i++;
	}
	i = 0;
	while (i < len)
	{
		_putchar(s[i] + '0');
		i++;
	}
	free(s);
	return (len);
}
