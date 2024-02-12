#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to be created
 * @text_content: string to write to the filename
 * Return: 1 0n success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int opn, wrte, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrte = write(opn, text_content, length);

	if (opn == -1 || wrte == -1)
		return (-1);

	close(opn);
	return (1);
}
