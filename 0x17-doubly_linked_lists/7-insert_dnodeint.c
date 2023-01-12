#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a node at a given index
 *@h: head of list
 *@idx: index of node
 *@n: value of new node
 *
 *Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *head;
	unsigned int i;

	temp = NULL;
	if (idx == 0)
		temp = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					temp = add_dnodeint_end(h, n);
				else
				{
					temp = malloc(sizeof(dlistint_t));
					if (temp != NULL)
					{
						temp->n = n;
						temp->next = head->next;
						temp->prev = head;
						head->next->prev = temp;
						head->next = temp;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (temp);
}
