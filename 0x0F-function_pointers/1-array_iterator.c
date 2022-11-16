#include "function_pointers.h"

/**
 *array_iterator - function that executes function given as
 *parameter on each element of an array
 *@array: Array
 *@size: size of Array
 *@action: pointer to function to use
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
