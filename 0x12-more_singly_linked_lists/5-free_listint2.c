#include "lists.h"

/**
 * free_listint2 - frees a list, sets head to NULL
 * @head: pointer to a pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
