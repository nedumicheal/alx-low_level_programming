#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **fur;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	fur = malloc(sizeof(int *) * height);

	if (fur == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		fur[m] = malloc(sizeof(int) * width);

		if (fur[m] == NULL)
		{
			for (; m >= 0; m--)
				free(fur[m]);

			free(fur);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
			fur[m][n] = 0;
	}

	return (fur);
}
