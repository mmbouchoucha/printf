#include <stdarg.h>
#include "holberton.h"

/**
 * pf_uint - write unsigned int
 * @args: name for va_list
 *
 * Return: num length.
 * On error, Return -1
 */
int p_uint(va_list *args)
{
int length = 0;
unsigned int value = va_arg(*args, unsigned int);
length = pf_rint(value, 0) + 1;
return (length);
}
