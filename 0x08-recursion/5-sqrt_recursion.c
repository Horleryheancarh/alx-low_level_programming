#include "main.h"

/**
 *_sqrt - calculate the sqrt
 *@a: integer number
 *@b: integer divisor
 *
 *Return: integer
 */
int _sqrt(int a, int b)
{
	if (a % b == 0)
	{
		if (a / b == b)
			return (b);
		else if (a == b)
			return (-1);
	}
	return (_sqrt(a, (b + 1)));
}

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
	return (_sqrt(n, 2));
}
