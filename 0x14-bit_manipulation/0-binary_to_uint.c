#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: binary string to convert.
*
* Return: converted unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

// Handle null pointer input
if (b == NULL)
return 0;

// Compute length of input string
for (i = 0; b[i] != '\0'; i++)
{
// If the character is not '0' or '1', return 0 to indicate an error
if (b[i] != '0' && b[i] != '1')
return 0;

// Multiply the current result by 2 and add the current digit
result = result * 2 + (b[i] - '0');
}

return result;
}
#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: binary string to convert.
*
* Return: converted unsigned int.
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
int i;

// Handle null pointer input
if (b == NULL)
return 0;

// Compute length of input string
for (i = 0; b[i] != '\0'; i++)
{
// If the character is not '0' or '1', return 0 to indicate an error
if (b[i] != '0' && b[i] != '1')
return 0;

// Multiply the current result by 2 and add the current digit
result = result * 2 + (b[i] - '0');
}

return result;
}
