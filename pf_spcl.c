#include <stdarg.h>
#include "holberton.h"
/**
 * pf_spcl - write char
 * @params: name for va_list
 *
 * Return: On success 1.
 * On error, Return -1
 */
int pf_spcl(va_list *params)
{
char c = va_arg(*params, int);
return (c + 0);
}
