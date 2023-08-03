#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number in line
 * @m: second number in line
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int dx, tom = 0;
	unsigned long int ben;
	unsigned long int tim = n ^ m;
	for (dx = 63; dx >= 0; dx--)
	{
		ben = tim >> dx;
		if (ben & 1)
			tom++;
	}

	return (tom);
}
