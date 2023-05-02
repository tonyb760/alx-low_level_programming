#include "lists.h"

/**
* free_listint2 - Frees a listint_t list and sets head to NULL.
* @head: A pointer to the address of the head of the listint_t list.
*/
void free_listint2(listint_t **head)
{
listint_t *current, *next;

if (head == NULL || *head == NULL)
return;

current = *head;
while (current)
{
next = current->next;
free(current);
current = next;
}

*head = NULL;
}
