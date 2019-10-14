#include "holberton.h"
/**
 *_strlen - finds the length of a string
 *
 *@s: string of which the length is to be found
 *
 *Return: Returns an int which is the size of the string
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
