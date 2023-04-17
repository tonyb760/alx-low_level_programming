#include <stdlib.h>
#include "dog.h"
/**
* init_dog - Initializes a dog struct with the given 
* name, age, and owner.
* @d: A pointer to the dog struct to initialize.
* @name: The name to give the dog.
* @age: The age to give the dog.
* @owner: The name of the owner to give the dog.
*
* Return: None (void).
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
