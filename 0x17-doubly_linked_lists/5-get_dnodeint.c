#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a doubly linked list
 *@head: head of list
 *@n: index of the node
 *
 *Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int n)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == n)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
