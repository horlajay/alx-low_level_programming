#include "main.h"

/**
 * read_textfile -  reads a text file and prints to the POSIX standard
 * @filename: name of file to print
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed.
 *         0 is returned on failure or if the filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int filed;
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	filed = open(filename, O_RDONLY);

	if (filed == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	nread = read(filed, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(filed);
	free(buffer);

	return (nwrite);
}
