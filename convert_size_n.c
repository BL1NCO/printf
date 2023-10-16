#include "main.h"

/**
 * convert_size_n - Covert size
 * @n: int
 * @s: int
 *
 * Return: always 0
 */

long int convert_size_n(long int n, int s)
{
	if (s == S_LONG)
		return (n);
	else if (s == S_SHORT)
		return ((short)n);

	return ((int)n);
}

