#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table you want to look into
* @key: key you are looking for
* Return: value associated with the element or NULL if can't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *value;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* find the correct key */
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	/* locate and retrieve value */
	value =	ht->array[index]->value;
	return (value);
}
