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

/**
 * print_pointer - Prints the value of a pointer variable
 * @types: List a of arguments
 * Return: Number of chars printed.
 */
int print_pointer(va_list types)
{
int ind = BUFF_SIZE - 2, length = 2;
unsigned long num_addrs;
char map_to[] = "0123456789abcdef";
void *addrs = va_arg(types, void *);
char buffer[BUFF_SIZE];

if (addrs == NULL)
return (write(1, "(nil)", 5));
buffer[BUFF_SIZE - 1] = '\0';

num_addrs = (unsigned long)addrs;

while (num_addrs > 0)
{
buffer[ind--] = map_to[num_addrs % 16];
num_addrs /= 16;
length++;
}
ind++;

buffer[--ind] = 'x';
buffer[--ind] = '0';
return (write(1, &buffer[ind], BUFF_SIZE - ind - 1));
}
