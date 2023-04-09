#include "main.h"
/**
 * _memset – will fill the block of memory with a value
 * @s: start of address memory to be filled
 * @b: desired value
 * @n: bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

