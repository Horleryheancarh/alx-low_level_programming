#include "main.h"
/**
 *_abs - return the absolute value of int
 *@n: The number to  find the magnitude
 *
 *
 *Return: int - the magnitude of the input int
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
