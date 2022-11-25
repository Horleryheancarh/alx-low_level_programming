#include "lists.h"

/**
 *add_node - add a new node at the beginning of a list
 *@head: head of the linked list
 *@s: string
 *
 *Return: pointer to the head
 */
list_t *add_node(list_t **head, const char *s)
{
	list_t *temp;
	size_t c;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(s);

	for (c = 0; s[c]; c++)
		;

	temp->len = c;
	temp->next = *head;
	*head = temp;

	return (*head);
}
