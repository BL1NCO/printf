#include "main.h"
#include <stdio.h>

int main(void) {
    int chars_printed = _printf("Hello, %c! This is a %s example.%%\n", 'W', "printf");
    _printf("%c", 'S');
    printf("Total characters printed: %d\n", chars_printed);
    return 0;
}
