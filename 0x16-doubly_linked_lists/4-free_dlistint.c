#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointer to the head of the linked list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
