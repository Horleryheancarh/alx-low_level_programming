#include "main.h"

/**
 *print_rev - print a string in reveverse
 *@s: string
 *
 *Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}

	for (n--; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
