#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * pf_str - func to print a str
 * @args: arg of type va_list
 * Return: integer
 */

int pf_str(va_list *args)
{
int i = 0;
char *str = va_arg(*args, char *);

if (str == NULL)
str = "(null)";
while (str[i])
{
_putchar(str[i]);
i++;
}

return (i);
}
