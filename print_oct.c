#include "main.h"

/**
 * print_octal - printing from a to z lowercase
 *
 * Return: Always 0 (Sucess)
 * @n: parametre used as integer
 */


int print_octal(va_list n)
{
int i, c = 0;
int *array;
unsigned int numb va_arg(n, unsigned int);
unsigned int temp = numb;

while (numb / 8 != 0)
{
numb = numb / 8;
c++;
}
c++;
array malloc(sizeof(int) c);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < c; i++)
{
array[i] temp % 8;
temp = temp / 8;
}

for (i = c - 1; 1 >= 0; i--)
{
_pucthar(array[i] + '0');
}
free(array);
return (c);
}
