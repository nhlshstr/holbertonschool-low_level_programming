#include "function_pointers.h"
/**
 *int_index - searches for int
 *
 * @array: array that is passed
 * @size: size of the array passed
 * @cmp: pointer to function passed to it
 *
 * Return: position of int if found,
 *		-1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int pos;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (pos = 0; pos < size; pos++)
	{
		if (cmp(array[pos]))
			return (pos);
	}

	return (-1);
}
