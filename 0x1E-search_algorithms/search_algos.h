#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @i: index
 * @next: Pointer to next node
 *
 */
typedef struct listint_s
{
	int n;
	size_t i;
	struct listint_s *next;
} listint_t;

int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
int recursive_search(int *, size_t, int);

#endif
