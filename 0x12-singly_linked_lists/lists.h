#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

/**
 *struct list_s - singly linked list
 *@str: string
 *@len: length
 *@next: next node
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *);
size_t list_len(const list_t *);
list_t *add_node(list_t **, const char *);

#endif
