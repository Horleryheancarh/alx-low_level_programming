#include "main.h"

/**
 *print_square - Print a square using the input
 *@size: integer size of the square
 *
 *Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
