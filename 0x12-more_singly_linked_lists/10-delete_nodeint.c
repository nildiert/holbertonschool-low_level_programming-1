#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to a pointer
 * @index: index of the node that should be deleted
 * Return: 1 if successful or -1 if fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *new_node;
	unsigned int counter;

	temp = *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	counter = 0;
	while (counter < index - 1)
	{
		if (temp == NULL)
			return (-1);

		temp = temp->next;
		counter++;
	}

	new_node = (temp->next)->next;
	free(temp->next);
	temp->next = new_node;
	return (1);
}
