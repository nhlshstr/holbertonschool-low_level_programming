#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - function that executes a function as param.
 *
 * @array: arr of integers
 * @size: size of given array
 * @action: pointer to function
 *
 * Return: No return (Void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
