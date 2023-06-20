#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98,
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int d, e;

	if (n <= 98)
	{
		for (d = n; d <= 98; d++)
		{
			if (d != 98)
				printf("%d, ", d);
			else if (d == 98)
				printf("%d\n", d);
		}
	} else if (n >= 98)
	{
		for (e = n; e >= 98; e--)
		{
			if (e != 98)
				printf("%d, ", e);
			else if (e == 98)
				printf("%d\n", e);
		}
	}
}
