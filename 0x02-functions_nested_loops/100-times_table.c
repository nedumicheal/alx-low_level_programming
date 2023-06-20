#include "main.h"

/**
 * prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int d, e, f;

	if (n >= 0 && n <= 15)
	{
		for (d = 0; d <= n; d++)
		{
			for (e = 0; e <= n; e++)
			{
				f = e * d;
				if (e == 0)
				{
					_putchar(f + '0');
				} else if (f < 10 && e != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(f + '0');
				} else if (f >= 10 && f < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((f / 10) + '0');
					_putchar((f % 10) + '0');
				} else if (f >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((f / 100) + '0');
					_putchar(((f / 10) % 10) + '0');
					_putchar((f % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
