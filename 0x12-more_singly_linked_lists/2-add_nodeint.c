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
 * add_nodeint - adds a new node to the beginning of a list
 * @head: pointer to head of the list
 * @n: value of each node
 * Return: Address of the new element or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
