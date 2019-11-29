#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>


/**
 * pf_char - print char
 * @args: arg of type va_list
 * Return: int 1
 */

int pf_char(va_list *args)
{
char c = va_arg(*args, int);

_putchar(c);
return (1);
}
