#include "lists.h"

/**
 * dlistint_len - Finds the number of elements in a doubly linked list
 * @h: head of doubly linked list
 * Return: Number of elements in a doubly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
