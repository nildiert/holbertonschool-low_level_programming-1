#include "lists.h"

/**
 * create_node - creates a new node
 * @data: input values
 * Return: new node
 */

listint_t *create_node(int data)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = data;

	return (new_node);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: pointer to the head of the list
 * @n: value of each node
 * Return: Address of the new element or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *marker = *head;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);

	if (marker == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (marker != NULL && marker->next != NULL)
		marker = marker->next;

	marker->next = new_node;

	return (new_node);
}
