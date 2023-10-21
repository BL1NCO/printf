# ALX Software Engineering Printf Team Project

This team project, developed by [Abdellah hadid](https://github.com/Fokoda799) and [Khalil Labiad](https://github.com/BL1NCO), is a custom printf function for the C programming language called `_printf`. It has been optimized to handle various inputs and optional arguments, mirroring the functionality of the standard library function `printf`. We have created this as part of the ALX Software Engineering course requirements for evaluation. 💻📚

## Synopsis

The `_printf()` function is designed to write output to stdout, the standard output stream, using user-defined formats and options without relying on any standard library files. It employs a local buffer of 1024 bytes for printing, accommodating larger data sets as well. 📤📜

After successful execution, the `_printf()` function returns the total number of characters printed to stdout (excluding the null byte at the end of strings). In case of an output error, it returns a negative value of -1. 📈🔴

The prototype for this function is: `int _printf(const char *format, ...);` 📋

This means that it takes one mandatory format argument and an additional number of optional arguments. 🔄

## Format of the Format String

The format string is a character string enclosed in double quotes, composed of zero or more directives, ordinary characters (excluding `%`), and conversion specifications. Each conversion specification fetches zero or more subsequent arguments. 🗒️🔢

Each conversion specification starts with the `%` character and ends with a conversion specifier. In between, it may include (in this order):

1. Zero or more flags
2. An optional field width
3. An optional precision modifier
4. An optional length modifier

### The Flag Characters

Flag | Description
---|---
`#` | For `o` conversions, adds a prefix of "0" if the first character is not zero. For `x` and `X` conversions, adds "0x" or "0X" respectively for nonzero results.
`0` | (Not implemented yet) Intended for zero-padding, but currently unimplemented. If specified, it pads the converted value with zeros. If precision is given, the `0` flag is ignored.
`-` | (Minus sign, not implemented yet) Left-aligns the converted value, overriding the default right justification. Pads with blanks on the right rather than the left.
`' '` | Pads with a single blank space before a positive number or an empty string produced by a signed conversion.
`+` | Places a sign (`+` or `-`) before a number produced by a signed conversion. By default, only negative numbers receive this sign.

### The Field Width

An optional minimum field width specified by a decimal digit string (with a nonzero first digit). If the converted value has fewer characters than the field width, it is padded with spaces on the left (if the `-` flag is not present) or on the right (if `-` is present). You can also use `*` in place of a decimal string, where an argument is used as the width value.

Examples:
```c
printf("%5d", num);
printf("%*d", width, num);
```

### The Precision

An optional precision is represented by a period (`.`) followed by an optional decimal digit string. A negative precision is treated as if it were omitted. The precision specifies the minimum number of digits for `d`, `i`, `o`, `u`, `x`, and `X` conversions or the maximum number of characters to be printed from a string for `s` and `S` conversions. You can also use `*` to take an argument as the precision value.

Examples:
```c
printf("%.3d", num);
printf("%.*d", precision, num);
```

### Length Modifiers

Modifier | Description
---|---
`l` | Converts the argument to a `long int` or `unsigned long int`.
`h` | Converts the argument to a `short int` or `unsigned short int`.

### Conversion Specifiers

Specifier | Description
---|---
`d`, `i` | Converts `int` to a signed decimal notation. The precision specifies the minimum number of digits, and it's zero-padded on the left.
`o`, `u`, `x`, `X` | Converts to unsigned octal (o), unsigned decimal (u), or unsigned hexadecimal (x and X). The letters 'abcdef' and 'ABCDEF' are used for `x` and `X` conversions, respectively. The precision pads with zeros.
`c` | Converts `int` to an unsigned char, and the resulting character is written based on ASCII coding.
`s` | Expects a `char*` pointer to an array of characters and prints characters up to (but not including) a null byte (`\0`). Precision determines how many characters are printed.
`p` | Prints a `void*` pointer argument as a hexadecimal in lowercase, representing an address in memory.
`%` | Writes the '%' character, with the format specifier '%%'.
`b` | Converts the argument to an unsigned `int`, then produces its binary representation (base 2).
`S` | Expects a `char*` pointer to an array of characters, prints characters up to (but not including) a null byte (`\0`). Non-printable characters (ASCII value less than 32 or greater than or equal to 127) are printed as `\x` followed by the ASCII code value in hexadecimal (uppercase, always two characters).
`r` | Expects a `char*` pointer to an array of characters, prints characters in reverse order up to (but not including) a null byte (`\0`).
`R` | Expects a `char*` pointer to an array of characters, encodes characters using ROT13, and prints them in order up to (but not including) a null byte (`\0`).

## Authors

- Abdellah hadid 🖊️👨‍💻
- Khalil Labiad 🧑‍🤝‍🧑
