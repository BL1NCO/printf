#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFF_SIZE 1024

/**
 * struct fmt – format struct.
 * @fmt : char var.
 * @fn : function pointer.
 */
typedef struct fmt {
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
int print_octal(va_list n);
int print_unsigned(va_list arg);
int print_hex(va_list n);
int print_hex_upper(va_list n);
int print_non_printable(va_list types);
int append_hexa_code(char ascii_code, char buffer[], int i);
int print_pointer(va_list types);
int conversion_spec(val_list var);

#endif
