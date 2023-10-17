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

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define S_LONG 2
#define S_SHORT 1
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_SPACE 16

int _strlen(char *str);
int _putchar(char c);
int handle_print(const char *fmt, int *ind, va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int _printf(const char *format, ...);

int specifier(va_list arg, char buff[],
	int flags, int width, int precision, int size);
long int convert_size_n(long int num, int size);
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char buff[],
        int flags, int width, int prec,
        int length, char padd, char extra);

#endif

