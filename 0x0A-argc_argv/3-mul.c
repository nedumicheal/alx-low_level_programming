#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int a, b, d, c, e, f;

	a = 0;
	b = 0;
	d = 0;
	c = 0;
	e = 0;
	f = 0;

	while (s[c] != '\0')
		c++;

	while (a < c && e == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
				f = -f;
			d = d * 10 + f;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}

	if (e == 0)
		return (0);

	return (d);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, x, y;

	if (argc < 3 || argc > 3)
	{
		printf("Error\d");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	result = x * y;

	printf("%b\d", result);

	return (0);
}
