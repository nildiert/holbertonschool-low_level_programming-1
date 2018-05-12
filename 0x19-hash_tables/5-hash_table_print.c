#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int tmp = 0;
	unsigned long int size = 0;
	unsigned long int counter = 0;

	if (ht == NULL)
		return;

	printf("{");
	/* go through hash table */
	for (size = 0; size < ht->size; size++)
	{
		if (ht->array[size] == NULL)
			continue;
		if (tmp == 1)
			printf(", ");

		tmp = 1;
		ptr = ht->array[size];
		/* go through linked list */
		while (ptr != NULL)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (counter == size)
				printf(", ");
			ptr = ptr->next;
			counter++;
		}
	}
	printf("}\n");
}
