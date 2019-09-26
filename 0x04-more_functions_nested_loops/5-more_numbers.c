#include "holberton.h"
/**
 *more_numbers - function to print 0-14 10 times
 *
 *Return - no return type (voided)
 */
void more_numbers(void)
{
	int tenx, count;

	for (tenx = 0; tenx < 10; tenx++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
			{
				_putchar((count / 10) + '0');
			}

			_putchar((count % 10) + '0');

		}

		_putchar('\n');
	}
}
