#include "holberton.h"
/**
 *_strspn - function that gets the length of a prefix substring
 *
 * @s: the string provided
 * @accept: the array consisting of comparable bytes
 *
 * Return: Returns no. of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	const char *p;

	for (n = 0; *s; n++, s++)
	{
		for (p = accept; *p && *p != *s; p++)
		{
			;
		}

		if (!*p)
			break;
	}

	return (n);
}
