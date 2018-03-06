#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a linked list
 * @head: pointer to head
 * Return: Sum
 */

int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	listint_t *marker;

	marker = head;

	while (marker != NULL)
	{
		sum += marker->n;
		marker = marker->next;
	}
	return (sum);
}
