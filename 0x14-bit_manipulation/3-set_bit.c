#include "holberton.h"
/**
 *set_bit - sets the bit at given index to 1
 *@n: Number that is passed
 *@index: index at which bit is to be changed
 *
 * Return: 1 if success, -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	mask = mask << index;
	*n = (*n | mask);
	return (1);
}
