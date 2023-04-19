#include "function_pointers.h"

/**
* print_name - Prints a name.
* @name: Pointer to a string containing the name.
* @f: Pointer to a function that takes a string as a parameter
* and returns void.
*
* Description: This function prints a name by calling a function
* passed as a parameter and passing the name as an argument.
* If the name is NULL or the function is NULL, nothing is printed.
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
