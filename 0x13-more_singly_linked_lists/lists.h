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

/**
 *struct listp_s - singly linked list
 *@p: pointers of node
 *@next: points to next node
 */
typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *);
size_t listint_len(const listint_t *);
listint_t *add_nodeint(listint_t **, const int);
listint_t *add_nodeint_end(listint_t **, const int);
void free_listint(listint_t *);
void free_listint2(listint_t **);
int pop_listint(listint_t **);
listint_t *get_nodeint_at_index(listint_t *, unsigned int);
int sum_listint(listint_t *);
listint_t *insert_nodeint_at_index(listint_t **, unsigned int, int);
int delete_nodeint_at_index(listint_t **, unsigned int index);
listint_t *reverse_listint(listint_t **);
size_t print_listint_safe(const listint_t *);


#endif
