#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function to allocate memory
 *@b: size of memory to be allocated
 *
 *Return: memory address or error code
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
