#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the head of a doubly linked list
 * @n : integer value
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *ptr = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (ptr == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
		newnode->next = ptr;
		return (newnode);
	}


	while (ptr->next != NULL && ptr !=NULL)
		ptr = ptr->next;

	ptr->next = newnode;
	newnode->prev = ptr;
	newnode->next = NULL;

	return (newnode);
}
