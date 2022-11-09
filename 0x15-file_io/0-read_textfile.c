#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 *  standard output.
 * @filename: pointer to filename.
 * @letters: number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 *  if the file can not be opened or read, return 0.
 *  if filename is NULL return 0.
 *  if write fails or does not write the expected amount of bytes, return 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t o, r, w;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		return (0);
		free(buffer);
	}
	free(buffer);
	close(o);

	return (w);
}
