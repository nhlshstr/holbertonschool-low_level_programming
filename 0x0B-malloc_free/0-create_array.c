#include "holberton.h"
#include <stdlib.h>

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
	char *n = malloc(sizeof(char) * size);


	if (size == 0)
		return (NULL);

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
