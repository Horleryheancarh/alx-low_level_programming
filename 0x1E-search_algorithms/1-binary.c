#include "search_algos.h"

/**
 * recursive_search - Recursive Function
 *
 * @arr: array
 * @size: size of array
 * @val: value to search
 *
 * Return: index or -1
 */
int recursive_search(int *arr, size_t size, int val)
{
	size_t mid = size / 2;
	size_t i;

	if (arr == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", arr[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (val == arr[mid])
		return ((int) mid);

	if (val < arr[mid])
		return (recursive_search(arr, mid, val));

	mid++;
	return (recursive_search(arr + mid, size - mid, val) + mid);
}

/**
 * binary_search - Binary Search
 *
 * @arr: array
 * @size: size of array
 * @val: value to search
 *
 * Return: index or -1
 */
int binary_search(int *arr, size_t size, int val)
{
	int i;

	i = recursive_search(arr, size, val);

	if (i >= 0 && arr[i] != val)
		return (-1);

	return (i);
}

