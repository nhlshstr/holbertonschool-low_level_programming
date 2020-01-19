#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: Pointer to hash table object
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashT = malloc(sizeof(hash_table_t));

	if (hashT == NULL)
		return (NULL);
	hashT->array = calloc(size, sizeof(hash_node_t *));
	if (hashT->array == NULL)
	{
		free(hashT);
		return (NULL);
	}
	hashT->size = size;
	return (hashT);
}
