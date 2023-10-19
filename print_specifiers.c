#include "main.h"

/**
* print_char - Print a character.
* @list: va_list argument.
* Return: 1 (the number of characters printed).
*/
int print_char(va_list list)
{
char c = va_arg(list, int);

_putchar(c);
return (1);
}

/**
 * print_string - Write a string to standard output.
 * @list: va_list argument.
 * Return: The number of characters written.
 */
int print_string(va_list list)
{
char *str = va_arg(list, char *);
if (str == NULL)
{
str = "(null)";
}
return (write(1, str, _strlen(str)));
}

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
number = number - (d *e);
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
number = number - (d *e);
e = e / 10;
i++;
}
}
_putchar(l + '0');
return (i);
}

/**
 * print_binary - Prints an unsigned number
 * @types: Lista of arguments
 * Return: Numbers of char printed.
 */

int print_binary(va_list types)
{
unsigned int n, m, i, sum;
unsigned int a[32];
int count;

n = va_arg(types, unsigned int);
m = 2147483648;
a[0] = n / m;
for (i = 1; i < 32; i++)
{
m /= 2;
a[i] = (n / m) % 2;
}
for (i = 0, sum = 0, count = 0; i < 32; i++)
{
sum += a[i];
if (sum || i == 31)
{
char z = '0' + a[i];
_putchar(z);
count++;
}
}
return (count);
}
