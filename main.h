#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int	_puts(char *str);
void print(va_list args, char type, int *len);
int flags(const char *type, int *len);
void	print_num(long n, int *len);
int print_binary(unsigned int num, int *len);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void rev_string(char *s);
void	_unsigned_int(unsigned long n, int *len);

#endif
