#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int check_num(char *str)
{
	unsigned int m;

	m = 0;
	while (m < strlen(str))

	{
		if (!isdigit(str[m]))
		{
			return (0);
		}

		m++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int n;
	int o;
	int sum = 0;

	n = 1;
	while (n < argc)
	{
		if (check_num(argv[n]))

		{
			o = atoi(argv[n]);
			sum += o;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		n++;
	}

	printf("%d\n", sum);

	return (0);
}
