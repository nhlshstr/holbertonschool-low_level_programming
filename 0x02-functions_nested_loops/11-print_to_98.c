#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers from n to 98
 * @n: provided number to count from to 98
 *
 * Return: No return type
 */
void print_to_98(int n)
{
	int count;

	if (n > 99)
	{
		for (count = n; count >= 98; count--)
		{
			if (count != 98)
				printf("%d, ", count);
			else
				printf("%d", count);
		}
	}

	if (n < 99)
	{
		for (count = n; count <= 98; count++)
		{
			if (count != 98)
				printf("%d, ", count);
			else
				printf("%d", count);
		}
	}

	printf("\n");
}
