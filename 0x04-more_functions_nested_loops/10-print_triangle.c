#include "holberton.h"
/**
 *print_triangle - prints a triangle of base and height size
 *
 *@size: depicts the lenght and height of the triangle
 *
 *Return: No return
 *
 */
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b < (size - 1) - a)
				_putchar(' ');
			else
				_putchar('#');
		}

		_putchar('\n');
	}
}
