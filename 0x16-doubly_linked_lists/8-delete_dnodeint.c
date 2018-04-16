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
	unsigned int count = 0; unsigned int idx_count;

	if (head == NULL || *head == NULL)
		return (-1);

	ptr = *head;

	while (ptr != NULL) /* count list size */
	{
		ptr = ptr->next;
		count++;
	}

	if (index >= count) /* given index is too big so it fails */
		return (-1);

	ptr = *head;

	/* deletes node if it is at the head & last node of the list */
	if (index == 0 && count == 1)
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	/* deletes head of list if list has 2 or more nodes */
	if (index == 0 && count > 1)
	{
		ptr = ptr->next;
		(*head)->prev = NULL;
		free(ptr);
		return (1);
	}

	/* head edge cases accounted for, move pointer to index */
	for (idx_count = 0; idx_count < index; idx_count++)
		ptr = ptr->next;

	/* reassigns null and deletes the end node */
	if (ptr->next == NULL)
	{
		ptr->prev->next = NULL;
		free(ptr);
		return (1);
	}

	/* delete the middle node and reassign links */
	else if (ptr->prev && ptr->next)
	{
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
		return (1);
	}

	return (-1);
}
