#include "main.h"

/**
* _putchar - write char.
* @c : char argemment.
* Return : 1 for sucsse, -1 for erorr..
*/
int _putchar(char c)
{
    return write(1, &c, 1);
}