#include "main.h"

/**
 *leet - encode to 1337
 *@s: string
 *
 *Return: string
 */
char *leet(char *s)
{
	int i = 0, j;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = num[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
