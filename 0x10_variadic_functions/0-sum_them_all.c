#include "variadic_functions.h"
/**
 *sum_them_all - variadic func to find sum of all numbers
 *
 *@n: number of arguements passed
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}

	va_end(arguments);

	return (sum);
}
