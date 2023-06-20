#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x;
	unsigned long fibonacci1 = 0, fibonacci2 = 1, sum;

	for (x = 0; x < 50; x++)
	{
		sum = fibonacci1 + fibonacci2;
		printf("%lu", sum);

		fibonacci1 = fibonacci2;
		fibonacci2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
