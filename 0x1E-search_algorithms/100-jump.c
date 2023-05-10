#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Jump Search algorithm
 *
 * @arr: array
 * @size: size of array
 * @val: value to search
 *
 * Return: index or -1
 */
int jump_search(int *arr, size_t size, int val)
{
	int i, j, k, prev;

	if (arr == NULL || size == 0)
		return (-1);

	j = (int)sqrt((double)size);
	k = 0;
	prev = i = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", i, arr[i]);

		if (arr[i] == val)
			return (i);
		 k++;
		 prev = i;
		 i = j * k;
	} while (i < (int) size && arr[i] < val);

	printf("Value found between indexes [%d] and [%d]\n", prev, i);

	for (; prev <= i && prev < (int) size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, arr[prev]);
		if (arr[prev] == val)
			return (prev);
	}

	return (-1);
}
