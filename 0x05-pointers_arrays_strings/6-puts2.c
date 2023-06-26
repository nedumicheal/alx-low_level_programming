#include "main.h"
/**
 * puts2 - should print only one character out of two
 * starts with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int y = 0;
	int x = 0;
	char *w = str;
	int o;

	while (*w != '\0')
	{
		y++;
		w++;
	}
	x = y - 1;
	for (o = 0 ; o <= x ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
