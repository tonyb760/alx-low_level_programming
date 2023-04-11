#include <stdlib.h>
#include "main.h"

/**
* count_words - Count the number of words in a string
* @str: Pointer to the string to count the words of
*
* Return: The number of words in the string
*/
int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
count++;
}

return (count);
}

/**
* word_len - Get the length of a word
* @str: Pointer to the start of the word
*
* Return: The length of the word
*/
int word_len(char *str)
{
int len = 0;

while (str[len] != ' ' && str[len] != '\0')
len++;

return (len);
}

/**
* free_words - Free an array of words
* @words: Pointer to the array of words to free
* @num_words: The number of words in the array
*/
void free_words(char **words, int num_words)
{
int i;

for (i = 0; i < num_words; i++)
free(words[i]);

free(words);
}

/**
* strtow - Split a string into words
* @str: Pointer to the string to split
*
* Return: Pointer to an array of words, or NULL if failed
*/
char **strtow(char *str)
{
char **words;
int i, j, k, len, num_words;

if (str == NULL || str[0] == '\0')
return (NULL);

num_words = count_words(str);
if (num_words == 0)
return (NULL);

words = malloc(sizeof(char *) * (num_words + 1));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; i < num_words; i++)
{
while (str[j] == ' ')
j++;

len = word_len(&str[j]);

words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
free_words(words, i);
return (NULL);
}

for (k = 0; k < len; k++)
words[i][k] = str[j++];

words[i][k] = '\0';
}

words[num_words] = NULL;

return (words);
}

