#include <stdlib.h>

#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
char *old_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

old_ptr = ptr;
for (i = 0; i < old_size && i < new_size; i++)
new_ptr[i] = old_ptr[i];

free(ptr);

return (new_ptr);
}
