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
	int sum1, sum2;

	for (i  = 0; i < size; i++)
		sum1 += a[i * size + 1];
	for (j = 0; j < size; j++)
		sum2 += a[size - 1 + j * (size - 1)];
	printf("%d, %d\n", sum1, sum2);

}
