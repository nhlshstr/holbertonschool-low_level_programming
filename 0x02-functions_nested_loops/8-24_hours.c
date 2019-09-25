#include "holberton.h"
/**
 * jack_bauer - program to print all the secs in a day of JB
 *
 *Return - void (No return)
 *
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		_putchar('0' + (hour / 10));
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
	}
	}
}
