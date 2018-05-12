#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int size, tmp = 0;

	if (ht == NULL)
		return;

	printf("{");
	/* go through hash table */
	for (size = 0; size < ht->size; size++)
	{
		/* ignore nodes */
		if (ht->array[size] == NULL)
			continue;

		/* set condition to print commas */
		if (tmp == 1)
			printf(", ");
		tmp = 1;

		ptr = ht->array[size];
		/* go through linked list */
		while (ptr != NULL)
		{
			printf("'%s': '%s'", ptr->key, ptr->value);
			if (ptr->next != NULL)
				printf(", ");
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
