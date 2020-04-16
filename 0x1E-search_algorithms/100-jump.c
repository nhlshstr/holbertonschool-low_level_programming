#include "search_algos.h"
/**
 * jump_search - Performs jump search
 * @array: Array passed to the function
 * @size: Size of the array
 * @value: Value looked for
 *
 * Return: Index of found value, -1 o/w
 */
int jump_search(int *array, size_t size, int value)
{
	int step = 0, cur = 0, j = 0;

	if (!array)
		return (-1);

	step = sqrt(size);

	for (cur = 0; value > array[cur] && cur < (int) size; cur += step)
		printf("Value checked array[%d] = [%d]\n", cur, array[cur]);

	printf("Value found between indexes [%d] and [%d]\n", cur - step, cur);

	for (j = cur - step; j < cur && j < (int) size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
