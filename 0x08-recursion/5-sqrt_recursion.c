#include "main.h"

/**
 *_sqrt_recursion - find square root of a number
 *@n: integer
 *
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (m / _sqrt_recursion());
}
