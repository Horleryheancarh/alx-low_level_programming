#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - allocate memory for an array
 *@nmemb: array size
 *@size: size of elements
 *
 *Return: pointer to memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	str = malloc(j);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		str[i] = 0;

	return (str);
}
