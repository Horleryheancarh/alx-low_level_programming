#include "main.h"

/**
 *_strspn - get number of bytes in the initial segment of a string
 *which consists of bytes from accept
 *@s: string
 *@accept: string
 *
 *Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 1;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				check = 0;
				break;
			}
		}

		if (check == 1)
			break;
	}
	return (i);
}
