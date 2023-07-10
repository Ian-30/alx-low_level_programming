#include "main.h"

/**
 * read_textfile - Read text files and print it to the POSIX stdout
 *
 * @filename: Name of file to read
 * @letters: Number of letters to read or print
 *
 * Return: Number of letters to read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	int fp, output, read_file;

	str = malloc(sizeof(char) * letters);
	if (!str)
	{
		free(str);
		return (0);
	}
	if (!filename)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	read_file = read(fp, str, letters);
	output = write(STDOUT_FILENO, str, read_file);
	close(fp);
	return (output);
}
