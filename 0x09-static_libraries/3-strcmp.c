#include "holberton.h"
/**
 *_strcmp - function to comapre two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: difference if not 0
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}

	return (0);
}
