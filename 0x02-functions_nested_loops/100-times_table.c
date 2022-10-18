 #include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: input of table n
 * Return: nothing.
 */

void print_times_table(int n)
{
	int r, c;
	int b = 0;

	if (n <= 15 && n >= 0)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				b = (r * c);
				if (b < 10)
				{
					if (c != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(b + '0');
				}
				else if (b < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((b / 10) + '0');
					_putchar((b % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((b / 100) + '0');
					_putchar(((b % 100) / 10) + '0');
					_putchar((b % 10) + '0');
				}
				if (c != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
