#include "main.c"
#include <unistd.h>

/**
* write_c - write the char c to stdout.
* @c: the char to print.
* Return: Sucsces 1, Erorr -1.
*/
int write_c(char c)
{
        ssize_t wc = write(1, &c, 1);
        return (wc);
}
