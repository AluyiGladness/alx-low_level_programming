#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text
 * @text_content: content to append to the file's end
 *
 * Return: 1 on success and -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, a, v = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[v])
			v++;
		a = write(file_descriptor, text_content, v);

		if (a != v)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
