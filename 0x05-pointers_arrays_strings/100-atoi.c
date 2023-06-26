#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, k;

	i = 0;
	j = 1;
	k = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				k = (s[i] - '0') * j + k * 10;
				i++;
			}
			break;
		}
		i++;
	}
	return (k);
}
