#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * pf_rot13 - convert to rot13
 * @args: name for va_list
 *
 * Return: Str Length.
 */
int pf_rot13(va_list *args)
{
int length = 0, i = 0, j;
char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *str = va_arg(*args, char *);

for (i = 0; str[i] != '\0'; i++)
{
j = 0;
while ((from[j] != '\0') && (str[i] != from[j]))
{
j++;
}
if (str[i] == from[j])
{
_putchar(to[j]);
length++;
}
else if (from[j] == '\0')
{
_putchar(str[i]);
length++;
}
}
return (length);

}
