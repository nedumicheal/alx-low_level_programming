#include "main.h"

/**
 * binary_to_uint - converts given binary number to unsigned int
 * @b: string containing binary number
 * Return: the converted 
 */

unsigned int binary_to_uint(const char *b)
{
	int dx;
	unsigned int bin_to = 0;

	if (!b)
		return (0);

	for (dx = 0; b[dx]; dx++)
	{
		if (b[dx] < '0' || b[dx] > '1')
			return (0);
		bin_to = 2 * bin_to + (b[dx] - '0');
	}

	return (bin_to);
}
