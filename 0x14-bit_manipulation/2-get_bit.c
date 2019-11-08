#include "holberton.h"
/**
 *get_bit - gets the bit at index
 *
 * @n: Number that is passed
 * @index: Index of which the bit value is required
 *
 * Return: Value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = mask << index;

	if (n & mask)
		return (1);
	else
		return (0);

}
