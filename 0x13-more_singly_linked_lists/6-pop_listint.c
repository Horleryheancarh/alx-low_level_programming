#include "lists.h"

/**
 *pop_listint - removes the head node
 *@head: head of a list
 *
 *Return: head node
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;
	listint_t *node;

	if (*head == NULL)
		return (0);

	node = *head;
	num = node->n;
	temp = node->next;
	free(node);
	*head = temp;

	return (num);
}
