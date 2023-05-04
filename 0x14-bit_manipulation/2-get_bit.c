#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index.
*
* Given an unsigned long integer n and an index, this
* function returns the
* value of the bit at the specified index.
*
* @n: The unsigned long integer whose bit value to retrieve.
* @index: The index of the bit to retrieve
* (0 is the least significant bit).
*
* Return: The value of the bit at the specified index,
* or -1 if an error occurs.
*/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned int i;

if (n == 0 && index < 64)
return (0);

for (i = 0; i <= 63; n >>= 1, i++)
{
if (index == i)
{
return (n & 1);
}
}

return (-1);
}
