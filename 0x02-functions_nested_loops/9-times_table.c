#include "main.h"
/**
 *times_table - print 9 times table
 *
 *Return: void
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			prod = i * j;
			if (prod > 9)
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else
			{
				_putchar(32);
				_putchar(prod + 48);
			}
		}
		_putchar('\n');
	}
}
