#include <stdarg.h>
#include "holberton.h"
/**
 * pf_rint - print uint rev
 * @value: num to  print
 * @length: count of digits to print
 * Return: length.
 */
int pf_rint(unsigned int value, int length)
{
if (value / 10)
length = pf_rint(value / 10, length + 1);
_putchar(value % 10 + '0');
return (length);
}
