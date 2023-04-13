#include <stdlib.h>

/**
* _realloc - Reallocates a memory block using malloc and free
* @ptr: Pointer to the memory previously allocated with malloc
* @old_size: Size in bytes of the allocated space for ptr
* @new_size: New size in bytes of the new memory block
*
* Return: Pointer to reallocated memory block, or NULL if the function fails
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

/* If new_size is equal to old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

/* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

/* If new_size is zero and ptr is not NULL, equivalent to free(ptr) */
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

/* Allocate new block of memory with malloc */
new_ptr = malloc(new_size);

/* If malloc fails, return NULL */
if (new_ptr == NULL)
return (NULL);

/* Copy old data to new block, up to the minimum of old and new sizes */
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = ((char *)ptr)[i];

/* Free the old block of memory */
free(ptr);

return (new_ptr);
}
