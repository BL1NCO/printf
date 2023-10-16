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
                    char c = va_arg(args, int);
                    printf_c(c);
                    count++;
                    break;
                }
                case 's':
                {
                    char *s = va_arg(args, char *);
                    int n = printf_s(s);
                    printf_s(s);
                    count += n;
                    break;
                }
                case '%':
                {
                    printf_c('%');
                    count++;
                    break;
                }
                default:
                {
                    printf_c('%');
                    count++;
                    break;
                }
            }
        }
        else
        {
            printf_c(*format);
            count++;
        }

        format++;
    }

    va_end(args);
    return (count);
}
