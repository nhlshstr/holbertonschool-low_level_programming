#include "search_algos.h"
/**
 * binary_search - performs binary search
 * @array: Array that is passed
 * @size: Size of the array
 * @value: Value being searched for
 *
 * Return: Index on success, -1 o/w
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int mid = 0;
	int j = 0;

	if (!array)
		return (-1);

	for (; low <= high;)
	{

		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j == high)
			{
				printf("\n");
				break;
			}
			printf(", ");
		}

		mid = (high + low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			high = array[mid - 1];
		}
		else
		{
			low = array[mid + 1];
		}
	}


	return (-1);
}
