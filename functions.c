#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* _strlen - function to print length of a string
* @s: string to find the legth of
* Return: length of string
*/

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
* print_string - function to print a string
* @s: string to be printed
* Return: nothing
*/

void print_string(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
* print_null - function to print (null)
* Return - nothing
*/
void print_null(void)
{
	char *s = "(null)";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
}

/**
* print_decimal - function to print an integer
* @d: integer to print
* @r_len: return lenght
*/
void print_decimal(int d, int *r_len)
{
	int mod, div;

	if (d == 0)
		return;

	mod = d % 10;
	div = d / 10;

	print_decimal(div, r_len);

	_putchar(mod + '0');
	*r_len = *r_len + 1;
}
