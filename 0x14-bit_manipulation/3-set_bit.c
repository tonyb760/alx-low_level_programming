#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 *
 * Given a pointer to an unsigned long int and an index,
 * set_bit sets the value of the bit at the given index to 1.
 *
 * @n: Pointer to an unsigned long int to modify.
 * @index: Index of the bit to set to 1.
 *
 * Return: If successful, 1. Otherwise, -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	/* Ensure the index is within the bounds of an unsigned long int */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* Create a mask with the 1 in the correct bit position */
	mask = 1UL << index;

	/* Set the bit to 1 by performing a bitwise OR */
	*n |= mask;

	return (1);
}
