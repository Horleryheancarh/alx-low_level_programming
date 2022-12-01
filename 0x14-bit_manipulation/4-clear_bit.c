#include "main.h"

/**
 *clear_bit - clear the value at an index
 *@n: unsigned long int
 *@index: index of the bit
 *
 *Return: value of the bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
