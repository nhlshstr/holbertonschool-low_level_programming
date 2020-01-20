#include "hash_tables.h"

/**
 * hash_table_set - Add element
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *add = malloc(sizeof(hash_node_t));

	if (!add)
		return (0);

	if (!ht || !key)
		return (0);

	add->key = strdup(key);

	if (!(add->key))
	{
		free(add);
		return (0);
	}

	add->value = strdup(value);

	if (!(add->value))
	{
		free(add);
		free(add->key);
		return (0);
	}

	node_assign(add, ht);
	return (1);
}

/**
 * node_assign - Add the node to the hash table
 * @h: hash table
 * @n: node
 */
void node_assign(hash_node_t *n, hash_table_t *h)
{
	unsigned long int i;
	hash_node_t *t = NULL;

	i = key_index((unsigned char *)n->key, h->size);
	t = h->array[i];

	if (h->array[i])
	{
		t = h->array[i];
		while (t)
		{
			if (strcmp(t->key, n->key) == 0)
				break;
			t = t->next;
		}
		if (t)
		{
			free(t->value);
			t->value = strdup(n->value);
			free(n->value);
			free(n->key);
			free(n);
		}
		else
		{
			n->next = h->array[i];
			h->array[i] = n;
		}
	}
	else
	{
		n->next = NULL;
		h->array[i] = n;
	}
}
