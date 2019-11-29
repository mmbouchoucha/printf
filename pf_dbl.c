#include <stdarg.h>
#include "holberton.h"
/**
 * pfl_d - print recurs
 * @i: num to get the length
 * @len: number length
 *
 * Return: On success length.
 */
int pfl_d(unsigned int i, int len)
{
while (i / 10)
{
i = i / 10;
len++;
}
return (len);
}

/**
 * pfr_d - print recursively
 * @i: num to be printed
 *
 * Return: nothing.
 */
void pfr_d(unsigned int i)
{
if (i / 10)
{
pfr_d(i / 10);
}
_putchar(i % 10 + '0');
}
/**
 * pf_dbl - write the double i
 * @args: name for va_list
 *
 * Return: On success 1.
 */
int pf_dbl(va_list *args)
{
int i = 0, len = 0, negative = 0;
unsigned int limit;
i = va_arg(*args, int);
if (i < 0)
{
_putchar('-');
limit = -i;
negative = 1;
}
else
limit = i;
len += pfl_d(limit, len);
pfr_d(limit);
len = len + negative + 1;
return (len);
}
