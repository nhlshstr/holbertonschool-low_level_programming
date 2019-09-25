#include "holberton.h"
/**
 *times_table - displays the nine times tables
 *
 * Return: No return
 */
void times_table(void)
{
	int a, b, pro;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			pro = a * b;

			if (pro < 10)
			{
				_putchar(pro + '0');
				_putchar(',');
				_putchar(' ');
			}

			if (pro > 10)
			{
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
				if (b != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
