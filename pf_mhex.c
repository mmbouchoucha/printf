#include <stdarg.h>
#include "holberton.h"

/**
 * pf_mhex_r - print num in base 16 recur
 * @value: num to be print
 * @length: amount of digit to be print
 * Return: integer length
 */
int pf_mhex_r(unsigned int value, int length)
{
if (value / 16)
length = pf_mhex_r(value / 16, length + 1);
if (value % 16 < 10)
_putchar(value % 16 + 48);
else
_putchar(value % 16 + 87);
return (length);
}


/**
 * pf_mhex - From deci to Hexa in smallcaps
 * @args: The name for va_list
 *
 * Return: num length.
 * On error, Return -1
 */
int pf_mhex(va_list *args)
{
int length = 0;
unsigned int value = va_arg(*args, unsigned int);

length = pf_mhex_r(value, length) + 1;
return (length);
}
