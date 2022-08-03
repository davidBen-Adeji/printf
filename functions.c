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
