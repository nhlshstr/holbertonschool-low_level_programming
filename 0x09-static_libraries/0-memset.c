#include "holberton.h"
/**
 *_memset - function to assign a no. of bytes an address
 *
 * @s: where the bytes are to be written
 * @b: the byte to be copied
 * @n: no. of bytes
 *
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = n;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
