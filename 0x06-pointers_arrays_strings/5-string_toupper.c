#include "main.h"

/**
 *string_toupper - convert string to upper case
 *@s: string
 *
 *Return: string
 */
char *string_toupper(char *s)
{
	int i, n;

	n = sizeof(s);
	for (i = 0; i < n; i++)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] = s[i] - 32;
	}

	return (s);
}
