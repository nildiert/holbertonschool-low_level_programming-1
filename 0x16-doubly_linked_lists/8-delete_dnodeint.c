#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a doubly linked list
 * @head: double pointer to the head of a doubly linked list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		if (count == idx)
			break;

		ptr = ptr->next;
		count++;
	}

	if (idx > count)
		return (-1);

	if (ptr->prev = NULL)
	{
		free (ptr);
		return (1);
	}

	else if (ptr->next = NULL)
	{
		ptr->prev = NULL;
		free (ptr);
		return (1);
	}

	else
	{
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free (ptr);
		return (1);
	}
}
