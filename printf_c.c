#include "main.h"
#include <stdarg.h>

/**
* printf_c - write the char c to stdout.
* @args: list of argemments (...).
* Return: 1
*/
int printf_c(va_list args)
{
        char c = va_arg(args, int);

        write_c(c);
        return (1);
}