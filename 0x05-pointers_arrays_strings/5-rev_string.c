#include "main.h"

/**
 *rev_string - reverse string
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
	int n = 0;
	int i, j;
	char *s2, temp;

	while (n >= 0)
	{
		if (s[n] == '\0')
			break;
		n++;
	}

	s2 = s;

	for (i = 0; i < (n - 1); i++)
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s2 + j);
			*(s2 + j) = *(s2 + (j - 1));
			*(s2 + (j - 1)) = temp;
		}
}
