#include "holberton.h"
/**
 *print_numbers - function to print 0-9
 *
 *Return: No return type
 *
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}

	_putchar('\n');
}
