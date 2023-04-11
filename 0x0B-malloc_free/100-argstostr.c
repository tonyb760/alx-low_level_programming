#include <stdlib.h>
#include "main.h"

/**
* argstostr - concatenates all the arguments of the program.
* @ac: argument count.
* @av: argument vector.
*
* Return: pointer to string containing all the arguments, or NULL on failure.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[len] = '\0';

return (str);
}
