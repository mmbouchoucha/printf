#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * pfstrrev - Print a str in reverse, followed by a new line.
 * @str: str to be print
 * @length: Str Length count
 *
 * Return: Str Length
 */
int pfstrrev(char *str, int length)
{
if (str[0])
{
length = pfstrrev(str + 1, length + 1);
_putchar(str[0]);
}
return (length);
}
/**
 * pf_rev - write str in reverse
 * @args: name for va_list
 *
 * Return: Str Length.
 */
int pf_rev(va_list *args)
{
int length = 0;
char *str = va_arg(*args, char *);

if (str == NULL)
str = "(null)";
return (pfstrrev(str, length));
}
