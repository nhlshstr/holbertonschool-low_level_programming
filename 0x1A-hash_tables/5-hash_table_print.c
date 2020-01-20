#include "hash_tables.h"

/**
 * hash_table_print - Hash table printer
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;
	hash_node_t *t = NULL;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		t = ht->array[i];
		if (t)
		{
			while (t)
			{
				count++;
				t = t->next;
			}
		}
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		t = ht->array[i];
		if (t)
		{
			while (t)
			{
				printf("'%s': '%s'", t->key, t->value);
				count -= 1;
				if (count)
					printf(", ");
				t = t->next;
			}
		}
	}
	printf("}\n");
}

