#include <stdio.h>
#include <stdlib.h>

/**
 *main - entrypoint
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: status
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
