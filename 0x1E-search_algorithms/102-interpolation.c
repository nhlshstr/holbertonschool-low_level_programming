#include "search_algos.h"
/**
 * interpolation_search - Performs interpolation search
 * @array: Array that is passed
 * @size: Size of the array
 * @value: Value being searched for
 *
 * Return: Index on success, -1 on failure.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int) size - 1;
	size_t pos = low + (((double)(high - low) / (
					array[high] - array[low])) * (value - array[low]));

	if (!array)
		return (-1);

	if (value > array[high])
	{
		printf("Value checked array[%d] is out of range\n", (int) pos);
		return (-1);
	}

	while (array[low] != array[high] &&
			array[low] <= value && array[high] >= value)
	{
		pos = low + (((double)(high - low) / (
						array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%d] = [%d]\n", (int) pos, array[pos]);

		if (value == array[pos])
			return (pos);
		else if (value < array[pos])
			high = pos  - 1;
		else if (value > array[pos])
			low = pos + 1;
	}

	return (-1);
}
