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
