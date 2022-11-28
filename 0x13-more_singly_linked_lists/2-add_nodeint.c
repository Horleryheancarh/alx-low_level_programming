#include "lists.h"

/**
 *add_nodeint - add new node to beginning of a list
 *@head: head of a list
 *@n: new element
 *
 *Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (*head);
}
