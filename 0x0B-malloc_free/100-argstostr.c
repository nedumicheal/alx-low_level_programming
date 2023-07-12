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
	int h, i, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (h = 0; h < ac; h++)
	{
		for (i = 0; av[h][i]; i++)
			k++;
	}
	k += ac;

	str = malloc(sizeof(char) * k + 1);
	if (str == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
	for (i = 0; av[h][i]; i++)
	{
		str[j] = av[h][i];
		j++;
	}
	if (str[j] == '\0')
	{
		str[j++] = '\i';
	}
	}
	return (str);
}
