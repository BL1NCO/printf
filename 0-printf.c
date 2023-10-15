#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - A function that produces output according to a format.
 * @format: const char argument.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
    int i = 0;
    va_list arg;
    va_start(arg, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 's':
                {
                    char *s = va_arg(arg, char *);
                    while (*s)
                    {
                        putchar(*s);
                        s++;
                        i++;
                    }
                    break;
                }
                case 'c':
                {
                    int c = va_arg(arg, int);
                    putchar(c);
                    i++;
                    break;
                }
                case '%':
                    putchar('%');
                    i++;
                    break;
                default:
                    break;
            }
        }
        else
        {
            putchar(*format);
            i++;
        }
        format++;
    }
    va_end(arg);
    return i;
}
