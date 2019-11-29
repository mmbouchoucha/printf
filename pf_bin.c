#include <stdarg.h>
#include "holberton.h"
/**
 * pf_base2 - print num in binary recursively
 * @value: num to be printed
 * @length: amount of digit to print
 *
 * Return: in success length and in NULL -1
 */
int pf_base2(unsigned int value, int length)
{
if (value / 2)
length = pf_base2(value / 2, length + 1);
_putchar(value % 2 + '0');
return (length);
}
/**
 * pf_bin - write in binary
 * @args: name for va_list
 *
 * Return: integer
 */
int pf_bin(va_list *args)
{
int length = 0;
unsigned int value = va_arg(*args, unsigned int);
length = pf_base2(value, length) + 1;
return (length);
}
