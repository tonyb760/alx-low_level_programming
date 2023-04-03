#include "main.h"

/**
 * _memset - Function that will fill the memory
 * @s: block to memory that will be filled
 * @b: the character to fill
 * @n: unsigned variable bytes to be filled
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
