#include "holberton.h"
/**
 *_islower - checks if lowercase
 *@c: The character to check
 *
 * Return: On success 1.
 *		Otherwise, 0 is returned
 */
int _islower(int c)
{
	char num;

	for (num = 97; num <= 122; num++)
	{
		if (num == c)
			return (1);
	}

	return (0);
}

