#include "main.h"
/**
 * print_number - prints an integer
 *@n:integer to be printed
 *
 */
int _putnumber(int n)
{
    char *str = _convert(n);
    unsigned int len = _strlen(str);

    _putstr(str);
    return len;
}