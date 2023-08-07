#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file to be print to STDOUT.
 * @filename: the text file being read
 * @letters: the number of letters read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ben;
	ssize_t dx;
	ssize_t w;
	ssize_t dz;

	dx = open(filename, O_RDONLY);
	if (dx == -1)
		return (0);
	ben = malloc(sizeof(char) * letters);
	dz = read(dx, ben, letters);
	w = write(STDOUT_FILENO, ben, dz);

	free(ben);
	close(dx);
	return (w);
}
