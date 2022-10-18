#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Return: nothing.
 */

void times_table(void)
{
	int r, c;
	int b = 0;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			b = (r * c);
			if (b < 10)
			{
				if (c != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(b + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((b / 10) + '0');
				_putchar((b % 10) + '0');
			}
			if (c != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
