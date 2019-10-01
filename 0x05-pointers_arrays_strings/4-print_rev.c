#include "holberton.h"
/**
 *print_rev - function to print a string in reverse
 *
 *@s: string that is to be printed in reverse
 *
 *Return: No return type
 */
void print_rev(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	s--;

	while (count >= 0)
	{
		if (*s != '\0')
		_putchar(*s);
		s--;
		count--;

	}

	_putchar('\n');
}
