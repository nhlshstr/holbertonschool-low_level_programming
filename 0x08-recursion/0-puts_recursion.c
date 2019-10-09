#include "holberton.h"
/**
 *_puts_recursion - prints string using putchar recursively
 *
 * @s: String that is being passed to be printed recursively
 *
 * Return - No return type (Void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
