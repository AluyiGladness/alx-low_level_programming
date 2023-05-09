#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters to read and print
 * Return: Number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int i, j;
	char *buf;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(file_descriptor, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(file_descriptor);

	j = write(STDOUT_FILENO, buf, i);

	if (j < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (j);
}
