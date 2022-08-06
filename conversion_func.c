#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* op_char - function to print a character
* @args: argument to print
* @r_len: return length
* Return: nothing
*/

void op_char(va_list *args, int *r_len)
{
	_putchar((char) va_arg(*args, int));
	*r_len = *r_len + 1;
}

/**
* op_string - function to print a string
* @args: argument to print
* @r_len: return lenght
* Return: nothing
*/

void op_string(va_list *args, int *r_len)
{
	char *s = va_arg(*args, char *);

	if (s != NULL)
	{
		print_string(s);
		*r_len = *r_len + _strlen(s);
	}
	else
	{
		print_null();
		*r_len = *r_len + 6;
	}
}

/**
* op_percent - function to print percentage symbol
* @args: argument to print
* @r_len: return length
* Return: nothing
*/

void op_percent(va_list *args, int *r_len)
{
	if (args == NULL || args != NULL)
	{
	_putchar('%');
	*r_len = *r_len + 1;
	}
}
