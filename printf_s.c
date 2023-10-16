#include "main.h"
#include <stdarg.h>

/**
 * printf_s - write the string s to stdout.
 * @args: list of arguments (...).
 * Return: number of bytes written.
 */
int printf_s(va_list args)
{
    char *str;
    int i, len;

    str = va_arg(args, char *);
    for (len = 0; *str != '\0'; len++);
    if (str != NULL)
    {
        for (i = 0; i < len; i++)
            write_c(*str);
        return (len);
    }
    else
    {
        str = "(null)";
        for (len = 0; *str != '\0'; len++);
        for (i = 0; i < len; i++)
            write_c(*str);
        return (len);
    }
}