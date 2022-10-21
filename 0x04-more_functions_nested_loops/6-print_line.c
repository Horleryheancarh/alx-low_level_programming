#include "main.h"

/**
 *print_line - ptint underscore number of inputs
 *@n: integer
 *
 *Return: void
 */
void print_line(int n)
{
	while(n > 0)
	{
		_putchar(95);
		n--;
	}
	_putchar('\n');
}
