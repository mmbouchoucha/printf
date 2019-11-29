#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * slcprntr - Select a print
 * @stdout: struct
 * @format: char
 * Return: the print
 */
stdout_t slcprntr(stdout_t stdout[], char format)
{
int i = 0;
int formats = 16;
for (; i < formats; i++)
if (stdout[i].sym == format)
return (stdout[i]);
return (stdout[i - 1]);
}

/**
 * _pfprintf - function to print
 * @stdout: struct of symbol and related func
 * @format: format str
 * @args: arg list
 * Return: int
 */
int _pfprintf(stdout_t stdout[], const char *format, va_list *args)
{
int plength = 0;
stdout_t selfunc;
int i = 0, p_flag = 1;
if ((format == NULL) || (format[0] == '%' && !format[1]))
return (-1);
while (format[i] != '\0')
{
if (format[i] != '%')
if (p_flag)
plength += _putchar(format[i]);
else
{
selfunc = slcprntr(stdout, format[i]);
if (selfunc.sym != '*')
plength += selfunc.pfunc(args);
else
plength += _putchar('%') + _putchar(format[i]);
p_flag = 1;
}
else if (p_flag)
p_flag = 0;
else
{
plength += _putchar(format[i]);
p_flag = 1;
}
i++;
}
return (plength);
}
