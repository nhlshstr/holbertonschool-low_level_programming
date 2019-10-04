#include "holberton.h"
/**
 *reverse_array - function to reverse array of int
 *
 * @a: array to be reversed
 * @n: size of the array
 *
 * Return: No return type
 */
void reverse_array(int *a, int n)
{
	int *front = a;
	int *end = a;

	int temp;

	end += (n - 1);

	for (; front < end; front++, end--)
	{
		temp = *front;
		*front = *end;
		*end = temp;
	}
}
