#include "main.h"
#include <stdio.h>
/**
 *reverse_array - reverse an array
 *@a: array
 *@n: integer
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0)
			printf(", ");
		i--;
	}
	printf("\n");
}
