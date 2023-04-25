#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'a');
	printf("Character:[%c]\n", 'a');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	printf("hello [%c] oh\n", '\n');
	_printf("hello [%c] oh\n", '\n');
	_printf("hello [%d] oh\n", -55);
	_printf("%b\n", 98);
	_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("%S\n", "Best\nSchool");
	return (0);
}
