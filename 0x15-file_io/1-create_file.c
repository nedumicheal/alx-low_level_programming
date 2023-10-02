#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: points to the name of the file to be created.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails = 1. Otherwise =1.
 */

int create_file(const char *filename, char *text_content)
{
	int dx, dy, dz = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dz = 0; text_content[dz];)
			dz++;
	}

	dx = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	dy = write(dx, text_content, dz);

	if (dx == -1 || dy == -1)
		return (-1);

	close(dx);

	return (1);
}
