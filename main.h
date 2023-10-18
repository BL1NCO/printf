#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFF_SIZE 1024

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

int _strlen(const char *str);
int _putchar(char c);
int handle_print(const char *fmt, int *ind, va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_binary(va_list types);
void print_buffer(char buffer[], int *buff_ind);
int _printf(const char *format, ...);
int print_int(va_list arg);
int print_decimal(va_list arg);
int print_pointer(va_list list);
int print_octal(va_list n);

#endif

