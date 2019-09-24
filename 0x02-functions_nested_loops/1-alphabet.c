#include "holberton.h"

/**
 * print_alphabet - prints the alphabet from a-z
 *
 * Return: no return type
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
