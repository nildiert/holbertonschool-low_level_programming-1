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

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (0);
	}

	newNode->value = (char *)value;
	newNode->key = (char *)key;
	newNode->next = NULL;

	if (ht->array[index] == NULL)
		return (0);

	while (ht->array[index] != NULL)
	{
		newNode->next = ht->array[index];
		ht->array[index]->next = NULL;
	}

	ht->array[index] = newNode;

	return (1);
}
