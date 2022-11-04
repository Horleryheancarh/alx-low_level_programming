#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entrypoint
 *@argc: argument count
 *@argv: argument value
 *
 *Return: status
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
