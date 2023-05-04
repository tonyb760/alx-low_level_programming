#include "main.h"

/**
 * flip_bits - counts the number of bits that differ between two numbers.
 * @n: the first number to compare.
 * @m: the second number to compare.
 *
 * Return: the number of bits that differ.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}

	return (count);
}
