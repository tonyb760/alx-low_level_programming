#include "main.h"

/**
* get_endianness - checks the endianness of the system
*
* This function checks the endianness of the system
* it's running on
* by storing the value 1 in an unsigned int
* and checking the value
* of the first byte of that int to determine
* the system's endianness.
*
* Return: 0 if the system is big endian,
* 1 if it's little endian.
*/
int get_endianness(void)
{
unsigned int x;
char *c;

x = 1;
c = (char *) &x;

return ((int) *c);
}

