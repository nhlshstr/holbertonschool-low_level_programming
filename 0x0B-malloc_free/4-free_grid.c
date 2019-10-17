#include <stdlib.h>
#include "holberton.h"
/**
 *free_grid - function that frees a 2D grid
 *
 * @grid: the 2D array that is passed.
 * @height: height of the 2d arrays (rows)
 *
 * Return: Void (No return type)
 */
void free_grid(int **grid, int height)
{
	int i  = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
