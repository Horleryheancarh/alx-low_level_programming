#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at idx
 *@head: head of a list
 *@idx: index
 *@n: integer
 *
 *Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *node;

	node = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && node != NULL; i++)
			node = node->next;
	}

	if (node == NULL && idx != 0)
		return (NULL);

	temp = malloc(sizeof(listint_t));
	
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = node->next;
		node->next = temp;
	}

	return (node);
}
