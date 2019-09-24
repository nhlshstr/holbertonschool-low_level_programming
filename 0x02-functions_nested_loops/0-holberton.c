#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char c[10] = "Holberton\n";

	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(c[a]);
	}
	return (0);
}
