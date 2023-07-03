#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
			{
				p++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (t);
		}
		s++;
	}
	return (p);
}
