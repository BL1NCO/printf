#include "main.h"

/**
* _strlen - lenght of string.
* @str : string argemment.
* Return : length of string.
*/
int _strlen(char *str)
{
        int len = 0;

        while (*str)
        {
                len++;
                str++;
        }
        return len;
}
