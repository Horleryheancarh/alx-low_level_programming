#include "lists.h"

/**
 *add_nodeint_end - add a new node at the end of a list
 *@head: head of a list
 *@n: new element
 *
 *Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *new;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	new = *head;

	if (*head == NULL)
		*head = temp;
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = temp;
	}

	return (*head);
}
