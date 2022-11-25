#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a linked list
 *@head: head of the linked list
 *@s: string to add to the list
 *
 *Return pointer to head
 */
list_t *add_node_end(list_t **head, const char *s)
{
	list_t *temp, *new;
	size_t c;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(s);

	for (c = 0; s[c]; c++)
		;

	temp->len = c;
	temp->next = NULL;
	new = *head;

	if (new == NULL)
	{
		*head = temp;
	}
	else
	{
		while (new->next != NULL)
			new = new->next;
		new->next = temp;
	}

	return (*head);
}
