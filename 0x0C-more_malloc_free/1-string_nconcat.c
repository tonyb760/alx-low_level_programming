#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings
* @s1: The first string to concatenate
* @s2: The second string to concatenate
* @n: The maximum number of bytes to concatenate from s2
*
* Return: A pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *result, *p;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len1] != '\0')
len1++;

while (s2[len2] != '\0')
len2++;

if (n >= len2)
n = len2;

result = malloc(sizeof(char) * (len1 + n + 1));

if (result == NULL)
return (NULL);

p = result;

while (*s1 != '\0')
*p++ = *s1++;

while (n-- > 0)
*p++ = *s2++;

*p = '\0';

return (result);
}
