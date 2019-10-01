#include "holberton.h"
/**
 *_puts - prints a string to stdout
 *
 *@str: string that is to be printed
 *
 * Return: No return type
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
