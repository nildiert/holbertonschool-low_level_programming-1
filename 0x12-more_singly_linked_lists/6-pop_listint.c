#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to a pointer
 * Return: head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *front_node;
	int i; /* temp holder */

	if (*head == NULL)
		return (0);

	front_node = *head;
	*head = (*head)->next;

	front_node->next = NULL;

	i = front_node->n;
	free(front_node);

	return (i);
}
