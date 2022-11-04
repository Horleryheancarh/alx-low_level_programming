#include <stdio.h>
#include <stdlib.h>

/**
 *main - entrypoint
 *Description: find number of change
 *@argc: number of arguments
 *@argv: value of arguments
 *
 *Return: status
 */
int main(int argc, char **argv)
{
	int num, n = 0;

	if (argc == 2)
	{
		num = atoi(argv[1]);

		while (num > 0)
		{
			if (num >= 25)
				num -= 25;
			else if (num >= 10)
				num -= 10;
			else if (num >= 5)
				num -= 5;
			else if (num >= 2)
				num -= 2;
			else if (num >= 1)
				num -= 1;
			n++;
		}
		printf("%d\n", n);
		exit(EXIT_SUCCESS);
	}
	printf("Error\n");
	exit(EXIT_FAILURE);
}
