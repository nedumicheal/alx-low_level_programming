#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char g;

	for (g = '0'; g <= '9'; g++)
	{
		_putchar(g);
	}
	_putchar('\n');
}
