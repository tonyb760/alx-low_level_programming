#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
* init_dog - Initializes a dog structure
* @d: A dog structure.
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The owner of the dog.
*
* Return: Nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

/**
* print_dog - Prints a dog structure
* @d: A dog structure
*
* Return: Nothing
*/
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
}

/**
* new_dog - Creates a new dog structure
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
*
* Return: A new dog structure, NULL if fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
char *new_name, *new_owner;
int name_len = 0, owner_len = 0;

if (name == NULL || owner == NULL)
return (NULL);

new_d = malloc(sizeof(dog_t));
if (new_d == NULL)
return (NULL);

name_len = _strlen(name) + 1;
new_name = malloc(sizeof(char) * name_len);
if (new_name == NULL)
{
free(new_d);
return (NULL);
}

owner_len = _strlen(owner) + 1;
new_owner = malloc(sizeof(char) * owner_len);
if (new_owner == NULL)
{
free(new_name);
free(new_d);
return (NULL);
}

_strcpy(new_name, name);
_strcpy(new_owner, owner);

new_d->name = new_name;
new_d->age = age;
new_d->owner = new_owner;

return (new_d);
}

/**
* free_dog - Frees a dog structure
* @d: A dog structure
*
* Return: Nothing
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
