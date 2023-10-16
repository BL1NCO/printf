/**
 * write_n - print num
 *
 * @is_neg: int
 * @ind: char
 * @buff: Buffer
 * @flags: int
 * @width: int
 * @precision: specifier
 * @size: Size int
 *
 * Return: always 0
 */

int write_n(int is_neg, int ind, char buff[],
	int flags, int width, int precision, int size)
{
	int length = BUFF_SIZE - ind - 1;
	char padd = ' ', extra_ch = 0;

	UNUSED(size);

	if ((flags & F_ZERO) && !(flags & F_MINUS))
		padd = '0';
	if (is_neg)
		extra_ch = '-';
	else if (flags & F_PLUS)
		extra_ch = '+';
	else if (flags & F_SPACE)
		extra_ch = ' ';

	return (write_num(ind, buff, flags, width, precision,
		length, padd, extra_ch));
}

