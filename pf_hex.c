#include <stdarg.h>
#include "holberton.h"
/**
 * pf_base16 - print num in base 16 recurs
 * @value: num to be printed
 * @length: amount of digit to print
 * Return: length.
 */
int pf_base16(unsigned int value, int length)
{
if (value / 16)
length = pf_base16(value / 16, length + 1);
if (value % 16 < 10)
_putchar(value % 16 + 48);
else
_putchar(value % 16 + 55);
return (length);
}
/**
 * pf_hex - write in binary language
 * @args: name for va_list
 *
 * Return: integer
 */
int pf_hex(va_list *args)
{
int length = 0;
unsigned int value = va_arg(*args, unsigned int);
length = pf_base16(value, length) + 1;
return (length);
}
