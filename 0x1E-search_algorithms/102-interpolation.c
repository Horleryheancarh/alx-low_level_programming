#include "search_algos.h"

/**
 * interpolation_search - Interpolation Search Algorithm
 *
 * @arr: array
 * @size: size of array
 * @val: value to search
 *
 * Return: index or -1
 */
int interpolation_search(int *arr, size_t size, int val)
{
	size_t i, l, h;
	double f;

	if (arr == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		f = (double) (h - l) / (arr[h] - arr[l]) * (val - arr[l]);
		i = (size_t)(l + f);
		printf("Value checked array[%d]", (int) i);

		if (i >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", arr[i]);
		}

		if (arr[i] == val)
			return ((int) i);

		if (arr[i] < val)
			l = i + 1;
		else
			h = i - 1;

		if (l == h)
			break;
	}

	return (-1);
}
