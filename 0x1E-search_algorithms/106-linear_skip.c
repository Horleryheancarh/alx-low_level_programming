#include "search_algos.h"

/**
 * linear_skip - search a skip list
 *
 * @list: list
 * @val: value
 *
 * Return: index or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int val)
{
	skiplist_t *go;

	if (list == NULL)
		return (NULL);

	go = list;

	do {
		list = go;
		go = go->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)go->index, go->n);
	} while (go->express && go->n < val);

	if (go->express == NULL && go->n < val)
	{
		list = go;
		while (go->next)
			go = go->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

	while (list != go->next)
	{
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == val)
			return (list);
		list = list->next;
	}

	return (NULL);
}
