#include "main.h"

/**
 * print_non_printable - Prints ascii codes in hexa of non printable chars
 * @types: Lista of arguments
 * Return: Number of chars printed
 */
int print_non_printable(va_list types)
{
int i = 0, offset = 0;
char *str = va_arg(types, char *);
char buffer[BUFF_SIZE];

if (str == NULL)
return (write(1, "(null)", 6));

while (str[i] != '\0')
{
if (str[i] >= 32 && str[i] < 127)
buffer[i + offset] = str[i];
else
offset += append_hexa_code(str[i], buffer, i + offset);
i++;
}
buffer[i + offset] = '\0';
return (write(1, buffer, i + offset));
}