0-putchar.c

#include <unistd.h>

/**
 * _putchar – will write the character c to stdout
 * @c: The character to that will print
 *
 * Return: 1 (Success)
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

