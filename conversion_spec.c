#include "main.h"

/**
 * conversion_spec - print reverse funtion
 *
 * @var: arg
 * Return: str value
 */

int conversion_spec(val_list var)
{
	char *string = va_arg(var, char*);
	int j, m = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[j] != '\0')
	{
		m++;
	}
	for (j = m - 1; j >= 0; j--)
	{
		_putchar(string[j]);
	}
	return (m);
}
