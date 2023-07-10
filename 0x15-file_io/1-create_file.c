#include "main.h"

/**
 * create_file - Create a file with read or write access for the user
 *
 * @filename: Name of file to create
 * @text_content: Content of file to create
 *
 * Return: 1 on success or -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int file, len, size;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file < 0)
		return (-1);

	for (len = 0; text_content && text_content[len];)
		len++;

	size = write(file, text_content, len);
	if (size < 0)
		return (-1);
	close(file);

	return (1);
}
