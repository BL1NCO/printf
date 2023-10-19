#include "main.h"

/**
 * print_octal - printing from a to z lowercase
 *
 * Return: Number of characters printed
 * @n: Parameter used as an unsigned integer
 */
int print_octal(va_list n)
{
int i, c = 0;
int *array;
unsigned int numb = va_arg(n, unsigned int);
unsigned int temp = numb;

while (numb / 8 != 0)
{
numb = numb / 8;
c++;
}
c++;
array = malloc(sizeof(int) * c);

if (array == NULL)
{
return (-1);
}

for (i = 0; i < c; i++)
{
array[i] = temp % 8;
temp = temp / 8;
}

for (i = c - 1; i >= 0; i--)
{
_putchar(array[i] + '0');
}

free(array);
return (c);
}

/**
 * print_unsigned - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @arg: parametre used as unsigned integer
 */

int print_unsigned(va_list arg)
{
unsigned int m = va_arg(arg, unsigned int);
unsigned int number;
int l = m % 10, d, e = 1;
int i = 1;

m = m / 10;
number = m;

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
number = number - (d *e);
e = e / 10;
i++;
}

_putchar(l + '0');
return (i);
}

/**
 * print_percent - printing %.
 *
 * Return: Always 0 (Sucess)
 * @list: parametre used as unsigned integer
 */

int print_percent(va_list list)
{
(void) list;
_putchar('%');
return (1);
}

/**
 * print_hex - printing hexdecimal
 * Return: Number of characters printed
 * @n: Parameter used as an unsigned integer
 */
int print_hex(va_list n)
{
int num = va_arg(n, int);
char hex[100];
int i = 0, c = 0;
int remainder, j;

if (num == 0)
{
_putchar('0');
return (1);
}

while (num > 0)
{
remainder = num % 16;
if (remainder < 10)
hex[i++] = remainder + '0';
else
hex[i++] = remainder + 'a' - 10;
num /= 16;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(hex[j]);
c++;
}

return (c);
}

/**
 * print_hex_upper - printing upper hexdecimal
 * Return: Number of characters printed
 * @n: Parameter used as an unsigned integer
 */
int print_hex_upper(va_list n)
{
int num = va_arg(n, int);
char hex[100];
int i = 0, c = 0;
int remainder, j;

if (num == 0)
{
_putchar('0');
return (1);
}

while (num > 0)
{
remainder = num % 16;
if (remainder < 10)
hex[i++] = remainder + '0';
else
hex[i++] = remainder + 'A' - 10;
num /= 16;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(hex[j]);
c++;
}

return (c);
}
