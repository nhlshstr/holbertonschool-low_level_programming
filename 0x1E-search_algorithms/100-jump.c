#include "search_algos.h"
/**
 * jump_search - performs jump search
 * @array: Array that is passed
 * @size: size of the array
 * @value: value that is being searched
 *
 * Return: Index of found value, -1 on error.
 */

int jump_search(int *array, size_t size, int value)
{
	int optimal_jump = (int) floor(sqrt(size));
	int cur = 0, j = 0, size1 = size;
	size_t current = 0;

	if (!array)
		return (-1);

	for (cur = 0; value > array[cur]; cur += optimal_jump)
	{
		current = cur;
		if (current >= size)
			break;
		printf("Value checked array[%d] = [%d]\n", cur, array[cur]);
	}

	printf("Value found between indexes [%d] and [%d]\n", (
				cur - optimal_jump), cur);

	for (j = cur - optimal_jump; j < cur; j++)
	{
		if (j >= size1)
			break;
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
