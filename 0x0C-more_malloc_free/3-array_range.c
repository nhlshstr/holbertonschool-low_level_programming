#include "holberton.h"
/**
 *array_range - creates an arr of integers
 *
 *@min: min. value passed.
 *@max: max. value passed
 *
 *Return: NULL if min > max or if malloc fails
 *		pointer otherwwise
 */
int *array_range(int min, int max)
{
	int range, i;

	int *array;

	if (min > max)
	{
		return (NULL);
	}

	range = (max - min) + 1;

	array = malloc(sizeof(int) * range);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < range; i++)
	{
		array[i] = min + i;
	}

	return (array);
}



