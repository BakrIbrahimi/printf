#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int _strlen(char *s);
void _reverse(char *s, int length);
char *_convert(int num);

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
int _putnumber(int n);
void print(va_list args, char type, int *len);

#endif
