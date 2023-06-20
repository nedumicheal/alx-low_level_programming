#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	unsigned long int n, o, next, sum;

	n = 1;
	o = 2;
	sum = 0;

	for (m = 1; m <= 33; ++m)
	{
		if (n < 4000000 && (n % 2) == 0)
		{
			sum = sum + n;
		}
		next = n + o;
		n = o;
		o = next;
	}

	printf("%lu\n", sum);

	return (0);
}

