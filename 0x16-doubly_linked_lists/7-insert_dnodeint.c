#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: double pointer to the head of the doubly linked list
 * @idx: index of the list where the node should be added
 * @n: integer value of new node
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *ptr;
	unsigned int counter = 0;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	ptr = *h;

/* adds a new node to the beginning of the list */
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (newnode);
	}

	while (ptr != NULL && counter < idx)
	{
		ptr = ptr->next;
		counter++;
	}

	if (idx != counter)
		return (NULL);

/*adds a new node to the end of the list */
	if (ptr == NULL)
	{
		add_dnodeint_end(h, n);
		return (newnode);
	}

/* adds node to the nth place of index */
	newnode->next = ptr;
	newnode->prev = ptr->prev;
	ptr->prev->next = newnode;
	ptr->prev = newnode;

	return (newnode);
}
