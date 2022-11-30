#include "lists.h"

/**
 *free_listint_safe - free a linked list
 *@head: head of a list
 *
 *Return: number of nodes
 */
size_t free_listint_safe(listint_t **head)
{
	size_t nodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while(*head != NULL)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);

		new->p = (void *)*head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*head == add->p)
			{
				*head = NULL;
				free_listp(&hptr);
				return (nodes);
			}
		}

		curr = *head;
		*head = (*head)->next;
		free(curr);
		nodes++;
	}

	*head = NULL;
	free_listp(&hptr);
	return (nodes);
}
