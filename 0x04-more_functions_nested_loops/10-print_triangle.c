#include "main.h"

/**
 *print_triangle - Print trinagle with ##
 *@size: size of the base and height
 *
 *Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < (size - i); j++)
			{
				_putchar(' ');
			}
			for (; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
