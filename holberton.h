#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct stdout_ - struct
 * @sym: char
 * @pfunc: p func
 */
typedef struct stdout_
{
  char sym;
  int (*pfunc)(va_list *);
} stdout_t;

int _putchar(char c);
stdout_t select_printer(char s);
int _printf(const char *format, ...);

int pfbasecnv(unsigned int value, int b, int length);
int pf_rint(unsigned int value, int length);
int _pfprintf(stdout_t stdout[], const char *format, va_list *args);
int pf_char(va_list *);
int pf_str(va_list *);
int pf_int(va_list *);
int pf_uint(va_list *);
int pf_dbl(va_list *);
int pf_oct(va_list *);
int pf_mhex(va_list *);
int pf_hex(va_list *);
int pf_bin(va_list *);
int pf_spcl(va_list *);
int pf_rot13(va_list *);
int pf_rev(va_list *);

#endif
