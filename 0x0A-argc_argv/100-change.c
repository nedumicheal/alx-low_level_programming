#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int m, n, o;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	o = 0;

	if (m < 0)
	{
		printf("0\n");
		return (0);
	}

	for (n = 0; n < 5 && m >= 0; n++)
	{
		while (m >= coins[n])
		{
			o++;
			m -= coins[n];
		}
	}

	printf("%d\n", n);
	return (0);
}
