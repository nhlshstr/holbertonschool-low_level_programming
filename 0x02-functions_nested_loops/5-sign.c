#include "holberton.h"
/**
 * print_sign - prints the sign of the given char
 *
 *@n: character being checked
 * Return: 1 if positive
 *0 if zero
 *-1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
