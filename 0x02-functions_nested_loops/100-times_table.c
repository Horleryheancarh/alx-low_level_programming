
#include "main.h"
/**
 *print_times_table - print times table between 0 and 15
 *@n: integer
 *Return: void
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(44);
				_putchar(32);
				prod = i * j;
				if (prod > 99)
				{
					_putchar(((prod / 100) % 10) + 48);
					_putchar(((prod / 10) % 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else if (prod > 9)
				{
					_putchar(32);
					_putchar((prod / 10) + 48);
					_putchar((prod % 10) + 48);
				}
				else
				{
					_putchar(32);
					_putchar(32);
					_putchar(prod + 48);
				}
			}
			_putchar('\n');
		}
	}
}
