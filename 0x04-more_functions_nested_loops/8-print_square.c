#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	int g, h;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (g = 0; g < size; g++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
