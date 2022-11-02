#include "main.h"

/**
 *prime - divides a number recursively to check if its prime
 *@a: integer
 *@b: integer divisor
 *
 *Return: 1 if a is prime 0 otherwise
 */
int prime(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (prime(a, (b + 1)));
}

/**
 *is_prime_number - check if a number is prime
 *@n: integer
 *
 *Return: integer
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);

	return (prime(n, 2));
}
