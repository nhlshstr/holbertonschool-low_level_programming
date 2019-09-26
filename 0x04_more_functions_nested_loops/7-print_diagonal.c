#include "holberton.h"
/**
 *print_diagonal - diagonal print
 *
 * @n: number of diagonals
 *
 * Return: no return type
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}


	else
		
	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
	
}
