#include "main.h"

/**
 *create_file - create a file and write to it
 *@filename: filename
 *@text_content: content to be written to the file
 *
 *Return: 1 if success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (!filename)
		return (0);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (0);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	wr = write(file, text_content, i);

	if (wr == -1)
		return (-1);

	close(file);

	return (1);
}
