#include "3-calc.h"

/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *
 *Return: Succes
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int, int);

	if (argc - 1 != 3 || argv[2][1])
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));
	exit(EXIT_SUCCESS);
}
