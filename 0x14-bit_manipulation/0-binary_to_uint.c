#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary string to convert.
 *
 * Return: converted unsigned int, or 0 if b contains non-binary
 * chars or is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	/* Compute length of input string */
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
