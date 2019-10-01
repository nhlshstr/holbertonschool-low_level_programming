#include "holberton.h"
/**
 *swap_int - Function to swap 2 integers.
 *
 * @a: first integer to swap
 * @b: second integer to swap
 *
 * Return: No return type.
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
