#include "search_algos.h"
/**
 * exponential_search - Performs exponential search
 *
 * @array: Array that is passed
 * @size: Size of the array
 * @value: Value to be found
 *
 * Return: Index on success, -1 on failure.
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, cap = 0, ret = 0;


	if (!array)
		return (-1);
	for (; i < (int) size && array[i] <= value; i *= 2)
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	cap = __min(i, size - 1);
	printf("Value found between indexes [%d] and [%d]\n", i / 2, cap);
	ret = binary_search_4exp(array, value, i/2, cap);

	return (ret);

}
/**
 * binary_search - Performs Binary Search
 * @array: Array that is passed
 * @size: Size of the array
 * @value: Value being searched for
 *
 * Return: Index on success, -1 o/w
 */

int binary_search_4exp(int *array, int value, int low, int high)
{
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
			return (mid);
		else if (value < array[mid])
			high = array[mid - 1];
		else
			low = array[mid + 1];
	}

	return (-1);
}
/**
 * __min - Finds the lower number
 * @a: First number
 * @b: Second number
 *
 * Return: Returns the lower number
 */
int __min(int a, int b)
{
	return (a < b ? a : b);
}
