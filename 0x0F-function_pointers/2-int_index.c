#include "function_pointers.h"

/**
 *int_index - search for an integer
 *@array: Array
 *@size: size of Array
 *@cmp: pointer to function to be used
 *
 *Return: -1 on error, integer on success
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
