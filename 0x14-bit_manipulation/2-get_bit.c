#include "main.h"

/**
 * get_bit - returns the value of bit to an index in decimal number
 * @n: number to search for
 * @index: index of bit
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int ben;

	if (index > 63)
		return (-1);

	ben = (n >> index) & 1;

	return (ben);
}
