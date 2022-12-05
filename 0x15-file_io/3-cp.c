#include "main.h"
#include <stdio.h>

/**
 *error_file - checks if files are openable
 *@file_from: source file
 *@file_to: dest file
 *@argv: arguments
 *
 *Return: void
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *error_close - checks if files are openable
 *@file: file
 *
 *Return: void
 */
void error_close(int file)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}


/**
 *main - entry point
 *@argc: num of arguments
 *@argv: arguments
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t chars, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buffer, 1024);
		if (chars == -1)
			error_file(-1, 0, argv);

		wr = write(file_to, buffer, chars);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	err = close(file_from);
	error_close(err);

	err = close(file_to);
	error_close(err);

	return (0);
}
