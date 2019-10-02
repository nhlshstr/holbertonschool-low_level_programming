#include <stdio.h>
#include "holberton.h"
/**
 *print_array - function to print arrays
 *
 *@a: array passed that is to be printed
 *
 * @n: size of the array
 *
 * Return: No return for this function.
 */
void print_array(int *a, int n)
{
	int i;


	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
