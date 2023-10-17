#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @str: The string argument.
 * Return: The length of the string.
 */

int _strlen(char *str)
{
int len = 0;

while (*str)
{
len++;
str++;
}
return (len);
}