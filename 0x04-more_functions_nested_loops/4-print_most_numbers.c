#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char g;

	for (g = '0'; g <= '9'; g++)
	{
		if (!(g == '2' || g == '4'))
			_putchar(g);
	}
	_putchar('\n');
}
