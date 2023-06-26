#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer 1 argument
 * @b: integer 2 argument
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
