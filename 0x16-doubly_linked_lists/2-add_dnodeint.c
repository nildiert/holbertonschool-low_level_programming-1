#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginnning of a doubly linked list
 * @head: double pointer to the head of a doubly linked list
 * @n: integer value
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
