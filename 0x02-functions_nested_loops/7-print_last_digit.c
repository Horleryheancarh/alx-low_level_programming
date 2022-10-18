#include "main.h"
/**
 *print_last_digit - return last digit of input
 *@n: input integer
 *
 *Return: integer
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	else
	{
		_putchar(d + 48);
		return (d);
	}
}
