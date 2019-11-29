#include <stdarg.h>
#include "holberton.h"
/**
 * l_i - print recurs
 * @i: num to get length
 * @len: num length
 *
 * Return: in success length.
 */
int l_i(unsigned int i, int len)
{
while (i / 10)
{
i = i / 10;
len++;
}
return (len);
}

/**
 * pfr_i - print recurs
 * @i: num to be print
 *
 * Return: nada
 */
void pfr_i(unsigned int i)
{
if (i / 10)
pfr_i(i / 10);
_putchar(i % 10 + '0');
}
/**
 * pf_int - write int
 * @args: name for va_list
 *
 * Return: On success -1
 */
int pf_int(va_list *args)
{
int i = 0, length = 0;
unsigned int ul;

i = va_arg(*args, int);
if (i < 0)
{
_putchar('-');
ul = -i;
length = 1;
}
else
ul = i;
length += l_i(ul, 0);
pfr_i(ul);
return (length + 1);
}
