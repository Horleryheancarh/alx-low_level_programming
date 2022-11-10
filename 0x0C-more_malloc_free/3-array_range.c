#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_range - write from min to max to a new memory location
 *@min: lower boundary
 *@max: upper boundary
 *
 *Return: pointer to memory of NULL
 */
int *array_range(int min, int max)
{
	int *n;
	int i;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(int) * ((max - min) + 1));

	if (n == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		n[i] = min;

	return (n);
}
