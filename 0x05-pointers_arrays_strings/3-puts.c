#include "main.h"

/**
 *_puts - prints string with new line
 *@s: string
 *
 *Reutns: void
 */
void _puts(char *s)
{
	int n = 0;

	while(n >= 0)
	{
		if (s[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[n]);
		n++;
	}
}
