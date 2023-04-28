#include <stdio.h>
#include "lists.h"

/**
 * listint_len - number of elements in a linked listint_t list
 * @h: head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return (count);
}
