#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table that is being updated
 * @key: hash table key, can't be an empty string
 * @value: value associated with the key, which can be an empty string
 * Return: 1 if sucess, 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newNode;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t*));
	if (newNode == NULL)
		return (0);

	newNode->value = strdup(value);
	newNode->key = strdup(key);
	newNode->next = NULL;

	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if(strcmp(key, newNode->key) == 0)
			{
				free(ptr->value);
				ptr->value = strdup(value);
				free(newNode);
				return(1);
			}
		ptr = ptr->next;
	}

	ht->array[index] = newNode;

	return (1);
}
