#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int d = 0;
	int o;

	while (*s != '\0')
	{
		d++;
		s++;
	}
	s--;
	for (o = d; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
