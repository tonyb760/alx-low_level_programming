#include "lists.h"

/**
* insert_nodeint_at_index - Inserts a new node with a
*given value at a specified index in a list.
*
* This function takes a pointer to the head node of a
*linked list, and inserts a new node with the given
* value at the specified index in the list. If the index is
*invalid (greater than the number of nodes in
* the list), NULL is returned. Otherwise, a pointer to
*the newly inserted node is returned.
*
* @head: A pointer to the head node of the linked list.
* @idx: The index at which to insert the new node (starting from 0).
* @n: The value to store in the new node.
*
* Return: If the index is invalid or the list is empty,
*NULL is returned. Otherwise, a pointer to the
* newly inserted node is returned.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int nodes;
listint_t *node_index = *head;
listint_t *new_node, *node_after;

if (head == NULL || *head == NULL)
return (NULL);

for (nodes = 0; node_index != NULL; nodes++)
node_index = node_index->next;

if (idx > nodes)
return (NULL);

node_index = *head;

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
else
{
node_after = *head;
for (nodes = 0; nodes < (idx - 1); nodes++)
node_index = node_index->next;
for (nodes = 0; nodes < idx; nodes++)
node_after = node_after->next;
node_index->next = new_node;
new_node->next = node_after;
return (new_node);
}
}
