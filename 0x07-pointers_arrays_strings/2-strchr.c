#include "holberton.h"
#include <stddef.h>
/**
 *_strchr - function that locates the character in the string
 *
 * @s: the string provided
 * @c: the charavrer that is to be found
 *
 * Return: pointer to c if found, else NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c && s[i] != '\0'; i++)
	{
		;
	}

	if(s[i] == c)
	{
		return (&s[i]);
	}

	return (NULL);
}
