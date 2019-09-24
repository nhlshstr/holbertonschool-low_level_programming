#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet from a-z
 *
 * Return: no return type
 */

void print_alphabet_x10(void)
{
	char c;
	int count = 0;

	while (count != 10)
	{

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	count++;
	_putchar('\n');
	}


}
