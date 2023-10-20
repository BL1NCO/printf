#include "main.h"

/**
 * _putchar - Write a character.
 * @c: The character to be written.
 * Return: 1 for success, -1 for error.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _strlen - Calculate the length of a string.
 * @str: The string argument.
 * Return: The length of the string.
 */
int _strlen(const char *str)
{
int len = 0;

while (str[len] != '\0')
{
len++;
}
return (len);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
write(1, buffer, *buff_ind);
*buff_ind = 0;
}
