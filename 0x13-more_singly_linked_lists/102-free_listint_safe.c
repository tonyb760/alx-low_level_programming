#include "lists.h"

size_t count_nodes_in_looped_list(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
* count_nodes_in_looped_list - Counts the number of unique nodes
*                             in a looped listint_t linked list.
* @head: A pointer to the head of the listint_t to check.
*
* Return: If the list is not looped - 0.
*         Otherwise - the number of unique nodes in the list.
*/
size_t count_nodes_in_looped_list(listint_t *head)
{
listint_t *tortoise, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tortoise = head->next;
hare = (head->next)->next;

while (hare)
{
if (tortoise == hare)
{
tortoise = head;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}

tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}

return (nodes);
}

tortoise = tortoise->next;
hare = (hare->next)->next;
}

return (0);
}
/**
* free_listint_safe - Frees a listint_t list safely (i.e.
*                     can free lists containing loops).
* @h: A pointer to the address of the head of the listint_t list.
*
* Return: The size of the list that was freed.
*/
size_t free_listint_safe(listint_t **h)
{
listint_t *tmp, *tortoise, *hare;
size_t nodes = 0, loop_size = 0;

if (h == NULL || *h == NULL)
return (0);

tortoise = *h;
hare = (*h)->next;

while (hare != NULL && hare->next != NULL)
{
if (tortoise == hare)
{
loop_size = count_loop_size(tortoise);
break;
}

tortoise = tortoise->next;
hare = hare->next->next;
}

if (loop_size > 0)
{
nodes = count_nodes(*h, tortoise, loop_size);
}
else
{
while (*h != NULL)
{
tmp = (*h)->next;
free(*h);
*h = tmp;
nodes++;
}
}

*h = NULL;
return (nodes);
}

/**
* count_loop_size - Counts the number of nodes in a loop of a linked list.
* @node: A pointer to a node in the loop.
*
* Return: The number of nodes in the loop.
*/
size_t count_loop_size(listint_t *node)
{
listint_t *tmp = node;
size_t size = 1;

while (tmp->next != node)
{
size++;
tmp = tmp->next;
}

return (size);
}

/**
* count_nodes - Counts the number of nodes in a linked list.
* @head: A pointer to the head of the linked list.
* @node: A pointer to a node in the loop of the linked list, or NULL.
* @loop_size: The number of nodes in the loop of the linked list, or 0.
*
* Return: The number of nodes in the linked list.
*/
size_t count_nodes(listint_t *head, listint_t *node, size_t loop_size)
{
listint_t *tmp = head, *last = NULL;
size_t count = 0;

while (tmp != node)
{
last = tmp;
tmp = tmp->next;
free(last);
count++;
}

if (loop_size > 0)
{
while (loop_size-- > 0)
{
last = tmp;
tmp = tmp->next;
free(last);
count++;
}
}

while (tmp != NULL)
{
last = tmp;
tmp = tmp->next;
free(last);
count++;
}

return (count);
}
