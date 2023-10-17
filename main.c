#include "main.h"

int main()
{
        _printf("test\n");
        _printf("%c\n", 'S');
        _printf("test char\n", 'a');
        _printf("test num %c -> ", 48);
        printf("test num %c\n", 48);
        _printf("%s\n", "test string");
        _printf("test %s\n", "string");
        _printf("%s -> ", (char *)0);
        _printf("%%\n");
        _printf("test %%\n");
        _printf("\n");
        _printf("Hello, %c! This is a %s example: %%%c\n", 'W', "printf", 'A');
        _printf("Hello, %c! This is a %s example: %%%c\n", 'W', "printf", 'A');
    return 0;
}
