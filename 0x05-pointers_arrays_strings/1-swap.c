#include "main.h"

/**
 *swap_int - Swap two integers
 *@a: first integer
 *@b: second integer
 *
 *Returns:void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
