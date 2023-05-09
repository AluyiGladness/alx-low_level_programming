#include "main.h"
/**
 * create_file - creates a file and writes on it
 * @filename: name of the file to create
 * @text_content: text to write to the file
 *
 * Return: 1 on success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, l, y = 0;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;

		l = write(file_descriptor, text_content, y);
		if (l != y)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
