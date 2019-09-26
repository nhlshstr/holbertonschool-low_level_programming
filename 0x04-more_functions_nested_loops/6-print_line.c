#include "holberton.h"
/**
 * print_line - prints a straight line in the terminal
 *
 * @n: determines lenght of the line
 *
 * Return - returns void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
