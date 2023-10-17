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
int buff_i;
char buffer[BUFF_SIZE];

if (format == NULL)
return (-1);

va_start(list, format);

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] != '%')
{
buffer[buff_i++] = format[i];
if (buff_i == BUFF_SIZE)
print_buffer(buffer, &buff_i);
printed_chars++;
}
else
{
print_buffer(buffer, &buff_i);
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
print_buffer(buffer, &buff_i);
return (printed_chars);
}
