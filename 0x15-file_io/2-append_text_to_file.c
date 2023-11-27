#include "main.h"

/**
 * append_text_to_file - Appends  the text at the end of file.
 * @filename: points to the name of file.
 * @text_content: The string to be  added at the end of file.
 *
 * Return: when the function fails or filename is NULL - -1,
 * when the file does not exist the user lacks write permissions - -1,
 * else - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int dx, dy, dz = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (dz = 0; text_content[dz];)
			dz++;
	}

	dx = open(filename, O_WRONLY | O_APPEND);
	dy = write(dx, text_content, dz);

	if (dx == -1 || dy == -1)
		return (-1);

	close(dx);

	return (1);
}
