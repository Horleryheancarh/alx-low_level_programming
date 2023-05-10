#include "search_algos.h"

/**
 * jump_list - Jump Search
 *
 * @list: list
 * @size: size of the list
 * @val: value to search
 *
 * Return: index or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int val)
{
	size_t i, j, k;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);
	j = (size_t) sqrt((double) size);
	i = k = 0;

	do {
		prev = list;
		k++;
		i = k * j;

		while (list->next && list->index < i)
			list = list->next;

		if (list->next == NULL && i != list->index)
			i = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int) i, list->n);
	} while (i < size && list->next && list->n < val);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int) prev->index, (int) list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int) prev->index, prev->n);
		if (prev->n == val)
			return (prev);
	}
	return (NULL);
}
