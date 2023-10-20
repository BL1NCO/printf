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

/**
 * append_hexa_code - Append ascci in hexadecimal code to buffer
 * @buffer: Array of chars.
 * @i: Index at which to start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}