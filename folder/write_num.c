#include "main.h"

/**
 * write_num - print num
 *
 * @ind: int
 * @buff: Buffer
 * @flags: int
 * @width: int
 * @prec: int
 * @length: int
 * @padd: char
 * @extra: char
 *
 * Return: always 0
 */

int write_num(int ind, char buff[],
	int flags, int width, int prec,
	int length, char padd, char extra)
{
	int i, padd_start = 1;

	if (prec == 0 && ind == BUFF_SIZE - 2 && buff[ind] == '0' && width == 0)
		return (0);
	if (prec == 0 && ind == BUFF_SIZE - 2 && buff[ind] == '0')
		buff[ind] = padd = ' ';
	if (prec > 0 && prec < length)
		padd = ' ';
	while (prec > length)
		buff[--ind] = '0', length++;
	if (extra != 0)
		length++;
	if (width > length)
	{
		for (i = 1; i < width - length + 1; i++)
			buff[i] = padd;
		buff[i] = '\0';
		if (flags & F_MINUS && padd == ' ')
		{
			if (extra_c)
				buff[--ind] = extra_c;
			return (write(1, &buff[ind], length) + write(1, &buff[1], i - 1));
		}
		else if (!(flags & F_MINUS) && padd == ' ')
		{
			if (extra)
				buff[--ind] = extra_c;
			return (write(1, &buff[1], i - 1) + write(1, &buff[ind], length));
		}
		else if (!(flags & F_MINUS) && padd == '0')
		{
			if (extra)
				buff[--padd_start] = extra_c;
			return (write(1, &buff[padd_start], i - padd_start) +
				write(1, &buff[ind], length - (1 - padd_start)));
		}
	}
	if (extra)
		buff[--ind] = extra_c;
	return (write(1, &buffer[ind], length));
}

