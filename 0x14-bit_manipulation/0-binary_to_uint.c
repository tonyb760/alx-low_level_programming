#include "main.h"

/**
 * binary_to_uint - Converts a binary number in the form
 *of a string to an equivalent unsigned integer.
 *
 * @b: Pointer to the binary string.
 *
 * Return: The equivalent unsigned integer, or 0 if the input
 *string is NULL or contains invalid characters.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
