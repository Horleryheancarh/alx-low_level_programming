#include "lists.h"

/**
 *print_dlistint - print all elements of a dlist_int list
 *@head: head of the list
 *
 *Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *head)
{
	int n;

	n = 0;

	if (head == NULL)
		return (n);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		n++;
		head = head->next;
	}

	return (n);
}
