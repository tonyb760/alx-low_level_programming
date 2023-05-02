#include "lists.h"

/**
* delete_nodeint_at_index - Deletes the node at a given
*                           index of a listint_t linked list.
* @head: A pointer to a pointer to the head of the listint_t list.
* @index: The index of the node to be deleted - indices start at 0.
*
* Return: On success - 1.
*         On failure - -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;

if (copy == NULL) /* If list is empty, return failure */
return (-1);

if (index == 0) /* If head node is to be deleted */
{
*head = (*head)->next;
free(copy);
return (1);
}

for (node = 0; node < (index - 1); node++) /* Traverse previous node */
{
if (copy->next == NULL) /* If index is greater than the number of nodes */
return (-1);

copy = copy->next;
}

tmp = copy->next; /* Node to be deleted */
copy->next = tmp->next;
free(tmp);
return (1);
}
