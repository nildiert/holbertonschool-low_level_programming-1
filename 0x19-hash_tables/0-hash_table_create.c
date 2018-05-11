#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: Newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hashTable;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	/* assign size parameter to be size of hashtable */
	hashTable->size = size;

	/* allocate memory for hash table nodes */
	hashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	/* Go through array and assign NULL to each node */
	for (i = 0; i < size; i++)
		hashTable->array[i] = NULL;

	return (hashTable);
}
