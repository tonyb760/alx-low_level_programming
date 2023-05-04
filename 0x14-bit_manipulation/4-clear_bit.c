i#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to an unsigned long int
 * @index: index of the bit to be set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is within bounds of unsigned long int */
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* create a mask with a 1 at the given index and all other bits 0 */
	unsigned long int mask = 1UL << index;

	/* use bitwise AND to clear the bit at the given index */
	*n &= ~mask;

	return (1);
}
