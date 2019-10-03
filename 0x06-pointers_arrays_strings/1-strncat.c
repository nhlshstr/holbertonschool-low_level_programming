#include "holberton.h"
/**
 * _strncat - function to concatenate 2 strings
 *
 * @dest: string to which string will be appended
 * @src: string which be added
 * @n: size of string to be added
 *
 * Return: pointer to dest is returned
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j < n; j++, i++)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
	}

	return (dest);
}
