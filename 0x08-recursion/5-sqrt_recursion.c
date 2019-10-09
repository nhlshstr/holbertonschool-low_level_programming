#include "holberton.h"
/**
 *_sqrt_recursion - finds the sqrt of a number using recursion
 *
 * @n: number provided to find sqrt of
 *
 * Return: square root. else -1 if not a natural sq.
 */
int _sqrt_recursion(int n)
{
	return (check(0, n));
}

/**
 *check - checks if the provided number is a
 *		perfect sq or not. Returns
 *		the perfect squar if so.
 *
 *@test: Number that is potentially the sq. root.
 *@sq: number that is being checked
 *
 * Return: -1 if not a perfect sq.
 *		Variable 'test' is returned if sq. root found.
 *		Function is recursively called to check for natural
 *		sq. root from 0 upwards.
 *
 */

int check(int test, int sq)
{
	if ((test * test) > sq)
		return (-1);
	if ((test * test) == sq)
		return (test);
	return (check((test + 1), sq));
}
