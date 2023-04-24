#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
void print(char c, va_list pr, int *i);

#endif
