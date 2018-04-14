#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data(n) of a doubly linked list
 * @head: pointer to the head of the linked list
 * Return: sum or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum)
}
