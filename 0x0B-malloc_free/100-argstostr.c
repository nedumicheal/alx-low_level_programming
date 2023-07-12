#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int j, k, b = 0, d = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
			d++;
	}
	d += ac;

	str = malloc(sizeof(char) * d + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (k = 0; av[j][k]; k++)
	{
		str[b] = av[j][k];
		b++;
	}
	if (str[b] == '\0')
	{
		str[b++] = '\k';
	}
	}
	return (str);
}
