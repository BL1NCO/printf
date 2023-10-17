#include "main.h"

/**
* print_string - write string.
* @list : va_list argemment.
* Return : length of string.
*/
int print_string(va_list list)
{
        char *str = va_arg(list, char *);
        if (str == NULL)
        {
                str = "(null)";
        }
        return write(1, str, _strlen(str));
}