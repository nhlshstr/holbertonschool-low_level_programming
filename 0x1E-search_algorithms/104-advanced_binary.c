#include "search_algos.h"
/**
 * advanced_bianry - Performs rcusive binary search
 * @array: Array passed
 * @size: Size of the array
 * @value: Value that is being searched
 *
 * Return: Index if found, success o/w
 */
int advanced_binary(int *array, size_t size, int value)
{
	int ret = 0;
	if (!array)
		return (-1);

	ret = rec_bs_helper(array, array[0], array[size - 1], value, -1);

	return (ret);
}
/**
 * rec_bs_helper - Recursive binary search helper
 * @arr: Array passed
 * @low: Lowest element in arr
 * @high: highest element in arr
 * @value: Value being searched for
 *
 * Return: Index on success, -1 o/w
 */
int rec_bs_helper(int *arr, int low, int high, int value, int result)
{
	int mid = low + (high - low) / 2;
	if (high >= low)
	{
		array_printer(arr, low, high);

		if (value < arr[mid])
			return (rec_bs_helper(arr, low, mid - 1, value, result));
		else if (value > arr[mid])
			return (rec_bs_helper(arr, mid + 1, high, value, result));
		else if (arr[mid] == value)
		{
			result = mid;
			return (rec_bs_helper(arr, low, mid - 1, value, result));
		}

	}
	return (result);
}
/**
 * array_printer - Prints an array
 * @array: Array passed
 * @low: Lowest element
 * @high: Highest element
 */
void array_printer(int *pArray, int low, int high)
{
	int i = low;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		if (i != high)
			printf("%d, ", pArray[i]);
		else
			printf("%d\n", pArray[i]);
	}
}
