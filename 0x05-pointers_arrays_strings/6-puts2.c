#include "holberton.h"
/**
 *puts2 - prints every other character of a line
 *
 *
 *@str: the string of which every other char will be printed
 *
 *Return: No return type
 *
 */
void puts2(char *str)
{
	int i;
	int count;
	/*find the length of the string*/
	while (str[count] != '\0')
		count++;
	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

