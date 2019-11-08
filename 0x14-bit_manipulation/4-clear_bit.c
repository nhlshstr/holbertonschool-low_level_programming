#include "holberton.h"
/**
 *clear_bit - clears the bit at given index to 1
 *@n: Number that is passed
 *@index: index at which bit is to be changed
 *
 * Return: 1 if success, -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	mask = mask << index;
	mask = ~mask;
	*n = (*n & mask);
	return (1);
}
