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
	int newArr[5];

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{

		newArr[i] = *(a + i);
		printf("%d", newArr[i]);
		break;
		}

		newArr[i] = *(a + i);
		printf("%d ,", newArr[i]);
	}

	printf("\n");
}
