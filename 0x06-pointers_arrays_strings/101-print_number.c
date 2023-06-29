#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int h;

	h = n;

	if (n < 0)
	{
		_putchar('-');
		h = -n;
	}

	if (h / 10 != 0)
	{
		print_number(h / 10);
	}
	_putchar((h % 10) + '0');
}
