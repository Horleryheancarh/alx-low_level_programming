#include "main.h"

/**
 *factorial - Find the factorial of a number
 *@n: integer
 *
 *Returns: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return(1);
	else
		return (n * factorial(n -1));
}
