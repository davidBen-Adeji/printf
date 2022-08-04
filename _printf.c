#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* _printf - function to print a string
* @format: the string along with its flags
* Return: the lenght of the string
*/
int _printf(const char *format, ...)
{
	int i, len = _strlen(format), r_len = 0;
	va_list args;

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			char c = (char) va_arg(args, int);

			_putchar(c);
			r_len++, i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			char *s = va_arg(args, char *);

			if (s != NULL)
			{
			print_string(s);
			r_len += _strlen(s), i++;
			continue;
			}
			else
			{
			print_null();
			r_len += 6, i++;
			continue;
			}
		}
		_putchar(format[i]);
		r_len++;
	}
	va_end(args);
	return (r_len);
}
