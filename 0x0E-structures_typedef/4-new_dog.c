#include <stdlib.h>
#include "dog.h"

/**
* new_dog - Creates a new dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: A pointer to the new dog, or NULL if allocation fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
/* Allocate memory for the new dog */
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return NULL;

/* Allocate memory for the dog's name and copy it */
new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
if (new_dog->name == NULL) {
free(new_dog);
return NULL;
}
strcpy(new_dog->name, name);

/* Allocate memory for the dog's owner and copy it */
new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (new_dog->owner == NULL) {
free(new_dog->name);
free(new_dog);
return NULL;
}
strcpy(new_dog->owner, owner);

/* Set the dog's age */
new_dog->age = age;

return new_dog;
}
