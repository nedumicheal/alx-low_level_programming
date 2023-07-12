#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
 
int count_word(char *s)
{
	int reto, d, e;

	reto = 0;
	e = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			reto = 0;
		else if (reto == 0)
		{
			reto = 1;
			e++;
		}
	}

	return (e);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **pattern, *tmp;
	int i, k = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	pattern = (char **) malloc(sizeof(char *) * (words + 1));
	if (pattern == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (d)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				pattern[k] = tmp - d;
				k++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = i;
	}

	pattern[k] = NULL;

	return (pattern);
}
