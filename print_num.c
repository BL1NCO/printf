#include "main.h"

/**
 * print_int - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @arg: parametre used as integer
 */

int print_int(va_list arg)
{
	int m = va_arg(arg, int);
	int number, l = m % 10, d, e = 1;
	int i = 1;

	m = m / 10;
	number = m;

	if (l < 0)
	{
		_putchar('-');
		number = -number;
		m = -m;
		l = -l;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			e = e * 10;
			number = number / 10;
		}
		number = m;
		while (e > 0)
		{
			d = number / e;
			_putchar(d + '0');
			number = number - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (i);
}

/**
 * print_decimal - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @arg: parametre used as integer
 */

int print_decimal(va_list arg)
{
	int m = va_arg(arg, int);
	int number, l = m % 10, d, e = 1;
	int i = 1;

	m = m / 10;
	number = m;

	if (l < 0)
	{
		_putchar('-');
		number = -number;
		m = -m;
		l = -l;
		i++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			e = e * 10;
			number = number / 10;
		}
		number = m;
		while (e > 0)
		{
			d = number / e;
			_putchar(d + '0');
			number = number - (d * e);
			e = e / 10;
			i++;
		}
	}
	_putchar(l + '0');
	return (i);
}
