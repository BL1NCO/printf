#include "main.h"

/**
 * print_string - Write a string to standard output.
 * @list: va_list argument.
 * Return: The number of characters written.
 */
int print_string(va_list list)
{
char *str = va_arg(list, char *);
if (str == NULL)
{
str = "(null)";
}
return (write(1, str, _strlen(str)));
}
