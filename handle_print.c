#include "main.h"

/**
 * handle_print - Print formatted output based on format specifiers.
 * @fmt: The format string.
 * @ind: Index into the format string.
 * @list: The va_list of arguments.
 * Return: The number of characters printed.
 */
int handle_print(const char *fmt, int *ind, va_list list)
{
int printed_chars = -1;
int i;

fmt_t fmt_types[] = {{'c', print_char}, {'s', print_string},
{'%', print_percent}, {'b', print_binary}, {'i', print_int},
	{'d', print_decimal}, {'p', print_pointer}};

for (i = 0; fmt_types[i].fmt != '\0'; i++)
{
if (fmt[(*ind)] == fmt_types[i].fmt)
{
return (fmt_types[i].fn(list));
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
return (2);
}
}
return (printed_chars);
}
