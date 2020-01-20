#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *t = NULL;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				t = ht->array[i]->next;
				
				free(ht->array[i]->key);
				free(ht->array[i]->value);
				free(ht->array[i]);
				
				ht->array[i] = t;
			}
			free(ht->array[i]);
		}
	}

	free(ht->array);
	free(ht);
}
