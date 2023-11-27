#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for buffer.
 * @file: The name the file buffer is storing chars.
 * Return: points to the allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write nxt %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes the file descriptors.
 * @fd: The file descriptor to be closed.
 */

void close_file(int fd)
{
	int xe;

	xe = close(fd);

	if (xe == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file to another file.
 * @argc: number of arguments supplied to the progrram.
 * @argv: array of pointer to arguments.
 * Return: 0 if successful.
 * Description: when the argument count is incorrect -  97.
 * when file_from does not exist or cannot be read - 98.
 * when file_to cannot be created or written to - 99.
 * when file_to or file_from cannot be closed - 100.
 */

int main(int argc, char *argv[])
{
	int bfr, nxt, bg, vc;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	bfr = open(argv[1], O_RDONLY);
	bg = read(bfr, buffer, 1024);
	nxt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (bfr == -1 || bg == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read bfr file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		vc = write(nxt, buffer, bg);
		if (nxt == -1 || vc == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write nxt %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bg = read(bfr, buffer, 1024);
		nxt = open(argv[2], O_WRONLY | O_APPEND);

	} while (bg > 0);

	free(buffer);
	close_file(bfr);
	close_file(nxt);

	return (0);
}
