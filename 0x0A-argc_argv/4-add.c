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
	int j, i;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i] != '\0'; i++)
		if (!isdigit(argv[j][i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[j]);
	}

	printf("%d\n", sum);
	return (0);
}
