#include "main.h"

/**
 * handle_print - Identify and process format specifiers in a format string.
 *
 * This function scans the format string for format
 * specifiers starting with '%',
 * matches them with corresponding handling functions,
 * and processes the associated arguments.
 *
 * @fmt: The format string.
 * @ind: Pointer to an index into the format string.
 * @list: The va_list of arguments.
 *
 * Return: The number of characters printed by the handling function.
 */
int handle_print(const char *fmt, int *ind, va_list list)
{
int printed_chars = -1;
int i;

fmt_t fmt_types[] = {
{'c', print_char}, {'s', print_string}, {'%', print_percent},
{'b', print_binary}, {'d', print_int}, {'i', print_int}, {'o', print_octal},
{'u', print_unsigned}, {'x', print_hex}, {'X', print_hex_upper},
{'S', print_non_printable}, {'p', print_pointer}};

for (i = 0; fmt_types[i].fmt != '\0'; i++)
{
if (fmt[(*ind)] == fmt_types[i].fmt)
return (fmt_types[i].fn(list));
}
if (fmt_types[i].fmt == '\0')
{
if (fmt[(*ind)] == '\0')
{
return (-1);
}
_putchar('%');
if (fmt[(*ind) - 1] == ' ')
_putchar(' ');
else
_putchar(fmt[(*ind)]);
}
return (2);
return (printed_chars);
}