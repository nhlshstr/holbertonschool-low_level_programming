#include "holberton.h"
/**
 *_isdigit - function to check if the number is a digit
 *
 *@c: variable to check if digit
 *
 * Return: 1 if digit
 *		0 otherwise
 */
int _isdigit(int c)
{
	int check;

	for (check = 0; check <= 9; check++)
	{
		if (c == (check + '0'))
			return (1);
	}

	return (0);
}

