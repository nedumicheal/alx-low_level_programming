#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int d, e, f;

	d = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (d < size)
	{
		f = size - d < 10 ? size - d : 10;
		printf("%08x: ", d);
		for (e = 0; e < 10; e++)
		{
			if (e < f)
				printf("%02x", *(b + d + f));
			else
				printf("  ");
			if (e % 2)
			{
				printf(" ");
			}
		}
		for (e = 0; e < f; i++)
		{
			int c = *(b + d + e);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
