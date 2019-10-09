#include "holberton.h"
/**
 *_pow_recursion - raises value of x to the pow of y
 *
 * @x: base
 * @y: power
 *
 * Return:-1 if error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}

	return (1);
}
