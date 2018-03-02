#include "lists.h"

/**
 * add_node_end - add a new node to the head of a linked list
 *
 * @head: start of linked list
 * @str: string that will be added
 *
 * Return: count, number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *ptr;
	int i;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);

	newnode->next = NULL;

	ptr = *head;

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->len = i;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = newnode;

	return (newnode);
}
