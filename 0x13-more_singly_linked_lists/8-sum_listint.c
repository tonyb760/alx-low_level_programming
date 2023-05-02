#include "lists.h"

/**
* sum_listint - Returns the sum of all the integers in a linked list.
*
* This function takes a pointer to the head node of a linked list, and
* calculates
* the sum of all the integers in the list. It does this by iterating over each
* node in the list, adding its value to a running total.
*
* @head: A pointer to the head node of the linked list.
*
* Return: If the list is empty, 0 is returned. Otherwise, the sum of all the
* integers in the list is returned.
*/
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
