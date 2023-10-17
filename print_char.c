#include "main.h"

/**
* print_char - Print a character.
* @list: va_list argument.
* Return: 1 (the number of characters printed).
*/
int print_char(va_list list)
{
char c = va_arg(list, int);

_putchar(c);
return (1);
}
