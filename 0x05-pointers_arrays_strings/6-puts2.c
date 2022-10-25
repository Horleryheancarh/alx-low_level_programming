#include "main.h"

/**
 *puts2 - print every other char
 *@s: string
 *
 *Return: void
 */
void puts2(char *s)
{
	int n = 0;

	while (n >= 0)
	{
		if (s[n] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (n % 2 == 0)
			_putchar(s[n]);

		n++;
	}
}
