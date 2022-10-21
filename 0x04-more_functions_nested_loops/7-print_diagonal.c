#include "main.h"

/**
 *print_diagonal - printa diagonal line as long as the input integer
 *@n: integer
 *
 *Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < n)
			_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
