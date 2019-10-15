#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *create_array - creates an array of chars, initializes it with a char
 *
 *@size: size of the mem allocated in bytes
 *@c: character that is passed
 *
 * Return: NULL if size = 0, NULL if fail.
 *		pointer to the array is returned, otherwise.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	char *n = malloc(sizeof(char) * size);

	if (n == NULL)
	{
		return (NULL);
	}

	for ( ; i < size; i++)
	{
		*(n + i) = c;
	}

	return (n);
}
