#include "hash_tables.h"
/**
 * has_table_set - Adds an element to hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value 
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add = malloc(sizeof(hash_node_t));
	
	if(add == NULL)
		return (0);

	if(ht == NULL || key == NULL)
		return (0);
	
	add->key = strdup(key);
	if(add->key == NULL)
	{
		free(add);
		return (0);
	}
	
	add->value = strdup(value);
	if (add->value == NULL)
	{
		free(add->key);
		free(add);
		return (0);
	}

	node_assign(add, ht);
	return (1);
}
/**
 * node_assign - Adds a node
 * @h: Pointer to hash table
 * @n: Node to be added
 */
void node_assign(hash_node_t *n, hash_table_t *h)
{
	unsigned long int i = 0;
	hash_node_t *t = h->array[i];

	i = key_index((const unsigned char *)n->key, h->size);
	t = h->array[i];

	if (h->array != NULL)
	{
		while (t != NULL)
		{
			if (strcmp(t->key, n->key) == 0)
					break;
			t = t->next;
		}
		if (t)
		{
			t->value = strdup(n->value);
			free(n->value);
			free(n->key);
			free(n);
		}
		else
		{
			t = h->array[i];
			h->array[i] = t;
		}
	}
	else
	{
		t->next = NULL;
		h->array[i] = t;
	}
}
