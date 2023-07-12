#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. arran
 */

int **alloc_grid(int width, int height)
{
	int **bee;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	*bee = malloc(sizeof(int *) * height);

	if (*bee == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
	*bee[m] = malloc(sizeof(int) * width);

		if *bee[m] == NULL)
		{
			for (; m >= 0; m--)
				free*(bee[m]);

			free*(bee);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		*bee[m][n] = 0;
	}

	return (*bee);
}
