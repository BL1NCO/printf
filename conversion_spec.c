#include "main.h"

/**
 * conversion_spec - function
 *
 * @args: argument
 * Return: always 0
 */

int conversion_spec(va_list rev)
{

	char *str = va_arg(rev, char*);
	int g;
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i] != '\0')
	{
		i++;
	}
	for (g = i - 1; g >= 0; g--)
	{
		_putchar(str[g]);
	}
	return (i);
}
