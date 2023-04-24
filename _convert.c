#include "main.h"
#include <stdbool.h>
/**
 * _convert - function that convert a string to a number.
 *@num: parameter int
 *@str: parameter string
 *
 */

char *_convert(int num)
{
    static char str[12];
    int i = 0;
    bool is_negative = false;
    if (num < 0)
    {
        is_negative = true;
        num = -num;
    }
    while (num != 0)
    {
        *(str + i) = num % 10 + '0';
        num /= 10;
        i++;
    }
    if (is_negative)
    {
        *(str + i) = '-';
        i++;
    }
    *(str + i) = '\0';
    _reverse(str, i);
    return str;
}