#include <stdarg.h>
#include "holberton.h"
/**
 * pf_base8 - print num in base 8 recur
 * @value: num to be print
 * @length: amount of digit to be print
 * Return: length
 */
int pf_base8(unsigned int value, int length)
{
if (value / 8)
length = pf_base8(value / 8, length + 1);
_putchar(value % 8 + '0');
return (length);
}
/**
 * pf_oct- write in octal
 * @args: name for va_list
 *
 * Return: integer
 */
int pf_oct(va_list *args)
{
int length = 0;
unsigned int value = va_arg(*args, unsigned int);
length = pf_base8(value, length) + 1;
return (length);
}
