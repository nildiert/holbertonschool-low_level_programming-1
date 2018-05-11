#include "hash_tables.h"

/**
* hash_table_get - retrieves a value associated with a key
* @ht: hash table you want to look into
* @key: key you are looking for
* Return: value associated with the element or NULL if can't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	/* find the correct key */
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	/* locate and retrieve value */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	/* does not find a match */
	return (NULL);
}
