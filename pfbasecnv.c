#include "holberton.h"
/**
 * pfbasecnv - print function
 * @value: num
 * @b: int
 * @length: int
 * Return: in success length.
 */
int pfbasecnv(unsigned int value, int b, int length)
{
if (!value)
return (length);
else if (b == 16)
{
if (value % b >= 10)
{
length = pfbasecnv(value / b, b, length + 1);
_putchar(value % b + 'A' - 10);
return (length);
}
else
{
length = pfbasecnv(value / b, b, length + 1);
_putchar(value % b + '0');
return (length);
}
}
else
{
length = pfbasecnv(value / b, b, length + 1);
_putchar(value % b + '0');
return (length);
}
}
