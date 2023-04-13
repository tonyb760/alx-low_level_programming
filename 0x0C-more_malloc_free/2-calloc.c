#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and sets memory to zero
* @nmemb: The number of elements in the array
* @size: The size of each element in bytes
*
* Return: A pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *mem;
unsigned int i;
char *p;

if (nmemb == 0 || size == 0)
return (NULL);

mem = malloc(nmemb * size);

if (mem == NULL)
return (NULL);

p = mem;

for (i = 0; i < nmemb * size; i++)
*p++ = 0;

return (mem);
}
