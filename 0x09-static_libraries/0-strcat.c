#include "holberton.h"
/**
 *_strcat - function to concatenate 2 strings
 *
 * @dest: string to be appended
 * @src: string that is to be appended to
 *
 * Return: Returns the pointer to one of the strings passed
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
