#include "main.h"
/**
 * reverse - function that return a string in reverse.
 *@str: parameter string
 *@length: parameter int
 *
 */

void _reverse(char *str, int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end)
    {
        char temp = *(str + start);
        *(str + start) = *(str + end);
        *(str + end) = temp;
        start++;
        end--;
    }
}