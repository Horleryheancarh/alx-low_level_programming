#include "main.h"

/**
 *read_textfile - reads a text file and prints it to stdout
 *@filename: filename
 *@letters: num of letters printed
 *
 *Return: num of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	close(file);
	free(buffer);

	return (wr);
}
