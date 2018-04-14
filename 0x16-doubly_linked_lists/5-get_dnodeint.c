#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node starting from 0
 * Return: targeted node or NULL if it doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	ptr = head;

	while (ptr != NULL)
	{
/*if the count matches the index then return, else continue */
		if (count == index)
			return (ptr);

		ptr = ptr->next;
		count++;
	}
	return (ptr);
}
