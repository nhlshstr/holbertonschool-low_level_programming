#include "hash_tables.h"
/**
 * hash_table_get - gets value
 * @ht: Hash table
 * @key: Key
 *
 * Return: Value, NULL if fail.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *x = NULL;

	if (!ht || !key)
	{
		return (NULL);
	}

	i = key_index((unsigned char *)key, ht->size);
	x = ht->array[i];

	while (x != NULL)
	{
		if (strcmp(x->key, key) == 0)
			return (x->value);
		x = x->next;
	}

	return (NULL);
}
