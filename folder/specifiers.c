#include "main.h"

/**
 * specifier - Func int
 *
 * @arg: Lista of arguments
 * @buff: arr
 * @flags:  int
 * @width: int
 * @precision: int
 * @size: Size int
 *
 * Return: always 0
 */

int specifier(va_list arg, char buff[],
	int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_neg = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;

	n = convert_size_n(n, size);

	if (n == 0)
		buff[i--] = '0';

	buff[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_neg = 1;
	}

	while (num > 0)
	{
		buff[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_n(is_neg, i, buff, flags, width, precision, size));
}

