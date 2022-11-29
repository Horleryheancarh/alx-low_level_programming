#include "lists.h"

/**
 *sum_listint - sum the whole list
 *@head: head of the list
 *
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
