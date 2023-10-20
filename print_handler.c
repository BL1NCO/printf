#include "main.h"

int _printf(const char *format, ...)
{
fmt_t fmt_types[] = {
{'c', print_char}, {'s', print_string}, {'%', print_percent},
{'b', print_binary}, {'d', print_int}, {'i', print_int}, {'o', print_octal},
{'u', print_unsigned}, {'x', print_hex}, {'X', print_hex_upper},
{'S', print_non_printable}, {'p', print_pointer}, {'r', conversion_spec}};

va_list varlist;
	int m = 0;
	int s;
	int l = 0;

	va_start(varlist, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
handler:

	while (format[m] != '\0')
	{
		s = 13;
		while (s >= 0)
		{
			if (fmt_types[s].id[0] == format[m] && fmt_types[s].id[1] == format[m + 1])
			{
				l += fmt_types[s].fn(varlist);
				m = m + 2;
				goto handler;
			}
			s--;
		}
		_putchar(format[m]);
		l++;
		m++;
	}
	va_end(varlist);
	return (l);
}
