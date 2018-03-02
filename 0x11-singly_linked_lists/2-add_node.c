#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list
 *
 * @head: start of linked list
 * @str: string that will be added
 *
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (newnode);

	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		free(newnode);
		return (newnode);
	}

	for (i = 0; str[i] != '\0'; i++)
		i++;

	newnode->len = i;

	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
