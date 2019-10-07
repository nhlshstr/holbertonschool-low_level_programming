#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - print the sum of diagonal values
 *
 * @a: array of which the diagsum will be found
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i  = 0; i < size; i++)
		sum1 += *(a + (i * size) + i);

	for (j = 0; j < size; j++)
		sum2 += *(a + (j * size) + (size - j - 1));

	printf("%d, %d\n", sum1, sum2);

}
