#include "main.h"

/**
* print_char - print char..
* @list : va_lst argemment.
* Return : 1.
*/
int print_char(va_list list)
{
    char c = va_arg(list, int);
    _putchar(c);
    return 1;
}