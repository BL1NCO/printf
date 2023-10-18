#include "main.h"

/**
 * print_pointer - printing address.
 * @list: va_list containing the pointer
 * Return: number of characters printed
 */

int print_pointer(va_list list)
{
void *ptr = va_arg(list, void *);
long int address = (long int)ptr;
int count = 0;
char hex_chars[16] = "0123456789abcdef";
int shift;
int hex_value;
int i;


if (ptr == NULL)
{
return (write(1, "(nil)", 5));
}
_putchar('0');
_putchar('x');
if (address == 0)
{
_putchar('0');
count++;
}
else
{
for (i = 15; i >= 0; i--)
{
shift = i * 4;
hex_value = (int)((address >> shift) &0xF);
_putchar(hex_chars[hex_value]);
count++;
}
}
return (count);
}

