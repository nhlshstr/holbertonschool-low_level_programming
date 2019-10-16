#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *alloc_grid - returns pointer to a 2d array
 *
 * @width: width of the 2d array
 * @height: height of the 2d array
 *
 *Return: pointer to the double pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **darr;

	if (width <= 0 || height == 0)
	{
		return (NULL);
	}

	darr = malloc(height * sizeof(int *));

	if (darr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		darr[i] = malloc(width * sizeof(int));
		if (darr[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(darr[j]);
			}
			free(darr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			darr[i][j] = 0;
		}
	}

	return (darr);
}
