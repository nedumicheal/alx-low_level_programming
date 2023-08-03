#include "main.h"

/**
 * print_binary - prints the binary equivalent of decimal number
 * @n: number to print in binary number
 */

void print_binary(unsigned long int n)
{
	int dx, tom = 0;
	unsigned long int ben;

	for (dx = 63; dx >= 0; dx--)
	{
		ben = n >> dx;

		if (ben & 1)
		{
			_putchar('1');
			tom++;
		}
		else if (tom)
			_putchar('0');
	}
	if (!tom)
		_putchar('0');
}
