#include "holberton.h"
/**
 *_isupper - function to test the case of the letter
 *
 *@c: the variable to check the case o
 *
 *Return: 1 if the var is uppercase
 *		0 otherwise
 */
int _isupper(int c)
{
	char samp;

	for (samp = 'A'; samp <= 'Z'; samp++)
	{
		if (c == samp)
		{
			return (1);
		}
	}

	return (0);
}
