#include "main.h"

/**
* handle_print - length of string.
* @fmt: string argument.
* @ind: string argument.
* @list: va_list argument.
* Return: length of string.
*/
int handle_print(const char *fmt, int *ind, va_list list)
{
    int printed_chars = -1;
    int i;

    fmt_t fmt_types[] =
    {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent}
    };

    for (i = 0; fmt_types[i].fmt != '\0'; i++)
    {
        if (fmt[(*ind)] == fmt_types[i].fmt)
        {
            return fmt_types[i].fn(list);
        }
    }

    if (fmt_types[i].fmt == '\0')
    {
        if (fmt[(*ind)] == '\0')
        {
            return (-1);
        }

        _putchar('%');

        if (fmt[(*ind) - 1] == ' ')
        {
            _putchar(' ');
        }
        else
        {
            _putchar(fmt[(*ind)]);
            return 2;
        }
    }

    return printed_chars;
}
