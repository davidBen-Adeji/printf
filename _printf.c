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
	spec_t ops[] = {
		{'c', op_char},
		{'s', op_string},
		{'%', op_percent}
	};

	int i, j, len, null_flag, r_len = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	len = _strlen(format);

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		null_flag = 0;

		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%')
		{
			for (j = 0; j < 3; j++)
				if (format[i + 1] == ops[j].a)
				{
				ops[j].f(&args, &r_len);
				null_flag = 1, i++;
				}
		}
		if (null_flag == 1)
			continue;
		_putchar(format[i]);
		r_len++;
	}
	va_end(args);
	return (r_len);
}
