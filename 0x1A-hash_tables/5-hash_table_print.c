#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			while (tmp)
			{
				count++;
				tmp = tmp->next;
			}
		}
	}

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				count -= 1;
				if (count)
					printf(", ");
				tmp = tmp->next;
			}
		}
	}

	printf("}\n");
}
