#include "main.h"

/**
 * get_endianness - checks if machine is little or big endian
 * Return: 0 for big, 1 for little edian
 */

int get_endianness(void)
{
	unsigned int dx = 1;
	char *j = (char *) &dx;

	return (*j);
}
