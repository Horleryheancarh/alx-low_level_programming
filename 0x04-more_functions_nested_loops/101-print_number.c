#include "main.h"

/**
 *print_number - print integers
 *@n: integer
 *
 *Return: void
 */
void print_number(int n)
{
	/* i - number of digits
	 * num - the integer
	 * d - placeholder to cal number of digits
	 */
	unsigned int num, d, i;

	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
	{
		num = n;
	}

	d = num;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
	{
		_putchar(((num / i) % 10) + 48);
	}
}
