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
	unsigned int count = 0; idx_count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	if (index >= count)
		return (-1);

	ptr = *head;

	if (index == 0 && count == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0 && count > 1)
	{
		*head = ptr->next;
		(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	for (idx_count = 0; idx_count < index; i++)
		ptr = ptr->next;

	if (ptr->next == NULL)
	{
		ptr->prev->next = NULL;
		free(ptr);
		return (1);
	}

	else if (ptr->prev && ptr->next)
	{
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
		return (1);
	}

	return (-1);
}
