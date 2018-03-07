#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
/* pointer to a struct w/ a value of n & sets it to equal parameter "n" */

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL && idx == 0)
	{
		*head = new_node; /* creates a new node */
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	temp = *head; /* keeps *head */

	while (counter < idx - 1) /* location of insertion */
 	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		counter++;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (NULL);
}
