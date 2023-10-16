#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024
#define S_LONG 2
#define S_SHORT 1
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_SPACE 16

int _printf(const char *format, ...);
int write_c(char c);
int printf_c(va_list args);
int printf_s(va_list args);
int specifier(va_list arg, char buff[],
	int flags, int width, int precision, int size);
long int convert_size_n(long int num, int size);
int write_number(int is_negative, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char buff[],
        int flags, int width, int prec,
        int length, char padd, char extra);

#endif

