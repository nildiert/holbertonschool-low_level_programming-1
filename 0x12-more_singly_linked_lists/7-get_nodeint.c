#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: beginning of the linked list
 * @index: positions inside the linked list
 * Return: nth node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *marker;
	unsigned int counter = 0;

	marker = head;

	while (marker != NULL)
	{
		if (counter == index)
			return (marker);

		marker = marker->next;
		counter++;
	}
	return (marker);
}
