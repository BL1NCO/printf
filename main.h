#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* struct fmt - format struct.
* @fmt : char var.
* @fn : function pointer.
*/
typedef struct fmt
{
char fmt;
int (*fn)(va_list);
} fmt_t;

int _strlen(char *str);
int _putchar(char c);
int handle_print(const char *fmt, int *ind, va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int _printf(const char *format, ...);

#endif

