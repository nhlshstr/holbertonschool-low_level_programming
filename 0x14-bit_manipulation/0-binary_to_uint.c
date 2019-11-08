#include "holberton.h"
/**
 *binary_to_uint - converts binary to unsigned int
 *
 * @b: pointer to char string
 *
 * Return: Converted unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count, i, val = 0;

	if (!b)
		return (0);
	for (count = 0; b[count]; count++)
		;

	for (i = 1; count > 0; count--)
	{
		if (!(b[count - 1] == '0' || b[count - 1] == '1'))
			return (0);
		val += (b[count - 1] - '0') * i;
		i *= 2;
	}

	return (val);
}
