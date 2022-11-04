#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entrypoint
 *@argc: number of arguments
 *@argv: value of arguments
 *
 *Return: status
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i = 0, j;

	for (j = 1; j < argc; j++)
	{
		if (!isdigit(argv[j][i]))
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		sum += atoi(argv[j]);
	}

	printf("%d\n", sum);
	exit(EXIT_SUCCESS);
}
