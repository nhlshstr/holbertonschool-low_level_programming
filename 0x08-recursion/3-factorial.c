#include "holberton.h"
/**
 *factorial - function to find factorial of the given number.
 *
 * @n: Number of which factorial is to be found.
 *
 * Return: Factorial. -1 if n < 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
