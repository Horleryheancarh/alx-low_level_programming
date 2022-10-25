#include "main.h"

/**
 *puts_half - print from the middle to end
 *@s: string
 *
 *Return: void
 */
void puts_half(char *s)
{
	int len = 0;
	int n;

	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		len++;
	}

	if (len % 2 == 1)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (n++; n <= len; n++)
	{
		if (s[n] == '\0')
			break;
		_putchar(s[n]);
	}
	_putchar('\n');
}
