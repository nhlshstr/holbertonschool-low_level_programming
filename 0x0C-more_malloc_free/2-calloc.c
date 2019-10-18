#include "holberton.h"
/**
 *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: Returns a pointer to newly allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *n;
	unsigned int i, num;

	if (nmemb == 0 || size == 0)
		return (NULL);

	num = nmemb * size;
	n = malloc(num);

	if (n == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < num; i++)
	{
		*((unsigned char *)n + i) = 0;
	}

	return (n);




}
