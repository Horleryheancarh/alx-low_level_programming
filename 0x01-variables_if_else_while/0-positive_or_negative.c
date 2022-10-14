#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Check if +ve or -ve
 *
 *Return: 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positve", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
		printf("%d is zero", n);

	return (0);
}
