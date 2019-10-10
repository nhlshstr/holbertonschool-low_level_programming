#include "holberton.h"
/**
 *is_prime_number - sends number via return to
 *			via checker function to
 *			check if the number is prime.
 *
 * @n: Number to check if prime.
 *
 * Return: - 1 if the i/p integer is prime
 *		- 0, otherwise.
 */
int is_prime_number(int n)
{
	return (checker(n, 2));
}

/**
 *checker - function to check if the number is prime
 *
 * @n: number that is passed for checking
 * @a: number that is incremented to check divisibility
 *
 * Return: -if i <= 2, 1 if number is 2, false otherwise.
 *		- if number is divisble by a, 0;
 *		- if sq. of the number is greater than n 1
 */

int checker(int n, int a)
{
	if (n <= 2)
	{
		return ((n == 2) ? 1 : 0);
	}

	if (n % a == 0)
		return (0);

	if ((a * a) > n)
		return (1);

	return (checker(n, a + 1));
}


