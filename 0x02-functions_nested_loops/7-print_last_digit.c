#include "holberton.h"
/**
 *print_last_digit - prints the last digit of the provided number
 *
 *@a: number of which last digit will be calculated
 *
 *Return: Returns the absolute value of the last digit
 */
int print_last_digit(int a)
{
	int num;

	if (a > 0)
	{
		num = (a % 10);
		_putchar (num + '0');
	}

	else
	{
		num = -1 * (a % 10);
		_putchar (num + '0');
	}

	return (num);
}
