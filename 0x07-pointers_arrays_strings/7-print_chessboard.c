#include "holberton.h"
/**
 *print_chessboard - function to print out the chessboard
 *
 * @a: Array of pointers to the chessboard array
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}
