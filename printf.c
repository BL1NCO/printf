#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
* _printf -  that produces output according to a format.
* @format: const string.
* Return: number of characters printed 
*/
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                {
                    printf_c(args);
                    count++;
                    break;
                }
                case 's':
                {
                    printf_s(args);
                    count += printf_s(args);
                    break;
                }
                case '%':
                {
                    write_c(37); // 37 is the ASCII code for '%'
                    count++;
                    break;
                }
                default:
                {
                    write_c(37); // 37 is the ASCII code for '%'
                    count++;
                    break;
                }
            }
        }
        else
        {
            write_c(37); // 37 is the ASCII code for '%'
            count++;
        }

        format++;
    }

    va_end(args);
    return (count);
}