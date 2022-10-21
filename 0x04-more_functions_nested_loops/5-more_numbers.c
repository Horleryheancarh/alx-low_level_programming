#include "main.h"

/**
 *more_numbers - print 0 - 14
 *
 *
 *Return: void
 */
void more_numbers(void)
{
	int i;
	
	for (i = 0; i < 15; i++)
	{
		if (i > 10)
			_putchar((i / 10) +48);
		_putchar((i % 10) + 48);
	}
	_putchar('\n');
}
