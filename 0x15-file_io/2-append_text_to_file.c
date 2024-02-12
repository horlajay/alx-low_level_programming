#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdesc;
	int numlet;
	int readwr;

	if (filename == NULL)
	{
		return (-1);
	}
	fdesc = open(filename, O_WRONLY | O_APPEND);

		if (fdesc == -1)
			return (-1);
	if (text_content)
	{
		for (numlet = 0; text_content[numlet]; numlet++)
			;
		readwr = write(fdesc, text_content, numlet);

		if (readwr == -1)
			return (-1);
	}
	close(fdesc);

	return (1);
}
