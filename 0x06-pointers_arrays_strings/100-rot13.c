#include "main.h"

/**
 *rot13 - encrypt rotating by 13 places
 *@s: string
 *
 *Return: string
 */
char *rot13 (char *s)
{
	int i = 0;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encod[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = encod[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
