#include "holberton.h"
/**
 *malloc_checked - allocated memory using malloc
 *
 * @b: generic type passed
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
