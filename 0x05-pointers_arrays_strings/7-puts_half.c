#include "holberton.h"
/**
 *puts_half - Prints second half of the function
 *
 *@str: string of which the second half is to be printed
 *
 *Return: No return type
 */
void puts_half(char *str)
{
	int count = 0;
	int div;

	while (str[count] != '\0')
		count++;

	div = count / 2;

	if (count % 2 == 1)
		++div;

	while (str[div] != '\0')
	{
		_putchar(str[div++]);
	}

	_putchar('\n');
}
