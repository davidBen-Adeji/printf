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
	int i, len = _strlen(format), aux_len = len;
	va_list args;

	if (format == NULL || *format == '\0')
		return (-1);

	va_start(args, format);

	for (i = 0; i < aux_len; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			char c = (char) va_arg(args, int);

			_putchar(c);
			len--;
			i++;
			continue;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			char *s = va_arg(args, char *);

			print_string(s);
			i++;
			len--;
			continue;
		}
		_putchar(format[i]);
	}
	va_end(args);
	return (len);
}
