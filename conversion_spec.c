#include "main.h"

/**
 * conversion_spec - function
 *
 * @args: argument
 * Return: always 0
 */

int conversion_spec(va_list args)
{

	char *str = va_arg(args, char*);
	int g;
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
		i++;
	for (g = j - 1; g >= 0; g--)
		_putchar(str[g]);
	return (i);
}
