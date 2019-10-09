#include "holberton.h"
/**
 *_strlen_recursion - returns the string length of the function
 *
 *@s: string of which length is to be found
 *
 * Return: 0 if s points to null. String length otherwise.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

