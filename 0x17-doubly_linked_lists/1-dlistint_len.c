#include "lists.h"

/**
 *dlistint_len - returns number of elements in a double linked list
 *@head: head of the list
 *
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *head)
{
	int n;

	n = 0;

	if (head == NULL)
		return (n);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		n++;
		head = head->next;
	}

	return (n);
}
