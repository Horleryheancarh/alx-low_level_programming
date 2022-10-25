#include "main.h"
#include <stdio.h>
/**
 *print_array - Print n elements in array
 *@s: array
 *@n: number of elements
 *
 *Return: void
 */
void print_array(int *s, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(s + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
