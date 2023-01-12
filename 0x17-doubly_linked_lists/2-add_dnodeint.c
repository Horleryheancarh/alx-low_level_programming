#include "lists.h"

/**
 *add_dnodeint - adds a new node at beginning
 *@head: head of list
 *@n: value of element
 *
 *Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *h;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	temp->next = h;

	if (h != NULL)
		h->prev = temp;

	*head = temp;

	return (temp);
}
