#include "holberton.h"
/**
 *_strcpy - copies the string pointed to by one variable
 *to the buffer pointed to by another
 *
 *@dest: one of the pointers passed
 *
 * @src: another pointer that was passed
 *
 * Return: pointer to the dest parameter that was passed
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);

}
