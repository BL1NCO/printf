#include "main.h"

/**
 * _printf - Print formatted output.
 * @format: The format string.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
int i, printed = 0, printed_chars = 0;
va_list list;

if (format == NULL)
return (-1);

va_start(list, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
_putchar(format[i]);
printed_chars++;
}
else
{
++i;
printed = handle_print(format, &i, list);

if (printed == -1)
{
va_end(list);
return (-1);
}

printed_chars += printed;
}
}
return (printed_chars);
}
