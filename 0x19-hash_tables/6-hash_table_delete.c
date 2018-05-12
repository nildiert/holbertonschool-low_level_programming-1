#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: deletes a hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *ptr;
	hash_node_t *tmp;

	for (index = 0; index < ht->size; index++)
	{
		ptr = ht->array[index];

		if (ptr == NULL)
			continue;

		while (ptr != NULL)
		{
			tmp = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
