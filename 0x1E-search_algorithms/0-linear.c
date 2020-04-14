#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to first element in array
 * @size: No. of elements
 * @value: Value to search for
 *
 * Return: Index where value is located, -1 o/w
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}

	return (-1);
}
