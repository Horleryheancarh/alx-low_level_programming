#include "main.h"

/**
 *append_text_to_file - appends text to the end of a file
 *@filename: filename
 *@text_content: content to be added
 *
 *Return: 1 if success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;

		wr = write(file, text_content, i);

		if (wr == -1)
			return (-1);
	}

	close(file);

	return (1);
}
