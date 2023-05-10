#include "search_algos.h"

/**
 * linear_search - Linear Search Algorithm
 * @arr: input array
 * @size: size of array
 * @val: value to search
 *
 * Return: Success
 */
int linear_search(int *arr, size_t size, int val)
{
	int i;

	if (arr == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, arr[i]);
		if (val == arr[i])
			return i;
	}

	return (-1);
}
