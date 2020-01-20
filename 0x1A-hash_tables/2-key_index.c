#include "hash_tables.h"
/**
 * key_index - Gives index of key
 * @key: Key
 * @size: size of hash array
 *
 * Return: Index of k/v pair in the hash array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return(hash_djb2(key) % size);
}
