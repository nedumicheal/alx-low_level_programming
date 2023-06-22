#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int g, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (g = 1; g <= size; g++)
		{
			for (h = g; h < size; h++)
			{
				_putchar(' ');
			}

			for (h = 1; h <= g; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
