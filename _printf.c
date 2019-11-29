#include "holberton.h"
/**
 * _printf - func to print anything
 * @format: given argument to the func
 * Return: integer
 */
int _printf(const char *format, ...)
{
va_list args;
int done;
stdout_t stdout[] = {
{'c', pf_char},
{'s', pf_str},
{'S', pf_str},
{'b', pf_bin},
{'i', pf_int},
{'d', pf_dbl},
{'u', pf_uint},
{'l', pf_uint},
{'h', pf_uint},
{'o', pf_oct},
{'X', pf_hex},
{'p', pf_mhex},
{'x', pf_mhex},
{'r', pf_rev},
{'R', pf_rot13},
{'*', pf_spcl}
};

va_start(args, format);
done = _pfprintf(stdout, format, &args);
va_end(args);

return (done);
}
