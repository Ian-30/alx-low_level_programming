#include "main.h"

/**
 * append_text_to_file - Append content to the end of the file
 *
 * @filename: Name of file to create
 * @text_content: The content
 *
 * Return: 1 if  sucess file or -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rwr;
	int letters;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;

		rwr = write(fd, text_content, letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
