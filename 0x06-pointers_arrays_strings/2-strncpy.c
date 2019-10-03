#include "holberton.h"
/**
 *_strncpy - copies n bytes from a string to a destination string
 *
 * @src: the source string
 *@dest: the destination string
 *@n: size of the string that has to be copied
 *
 * Return: Returns the destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);

}
