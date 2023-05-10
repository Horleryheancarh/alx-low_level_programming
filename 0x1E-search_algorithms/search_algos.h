#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @index: index
 * @next: Pointer to next node
 *
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with express lane
 * @n: integer
 * @index: index
 * @next: Pointer to next node
 * @express: Pointer to next node in express lane
 *
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
int recursive_search(int *, size_t, int);
int jump_search(int *, size_t, int);
int interpolation_search(int *, size_t, int);
int exponential_search(int *, size_t, int);
int advanced_binary(int *, size_t, int);
listint_t *jump_list(listint_t *, size_t, int);
skiplist_t *linear_skip(skiplist_t *, int);

#endif
