#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 *struct listint_s - singly linked list
 *@n: Integer
 *@next: points to next node
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pop_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);

#endif