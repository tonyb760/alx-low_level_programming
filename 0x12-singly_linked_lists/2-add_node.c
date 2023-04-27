#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - new node at the beginning of a list
  * @head: original linked list
  * @str: The string to add to the node
  *
  * Return: new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
