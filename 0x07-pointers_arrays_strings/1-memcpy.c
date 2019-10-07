#include "holberton.h"
/**
 *_memcpy - function to copy the memory location fri src to dest
 *
 * @dest: Where the mem location is to be copied
 * @src: Where the mem location is copied from
 * @n: number of bytes to copy
 *
 * Return: Pointer to dest is returned
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = n;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

