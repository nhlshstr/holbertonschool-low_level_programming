#include "holberton.h"
/**
 *flip_bits - counts the number of bits that need to be flipped
 *
 * @n: First number to be flipped
 *@m: Second number to be flipped
 *
 * Return: Returns the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned long int a = m ^ n;
	int count = 0;

	for (mask = 1; mask != 0; mask <<= 1)
	{
		if (a & mask)
			count += 1;
	}

	return (count);
}
