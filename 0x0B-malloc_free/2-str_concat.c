#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *@s1: string
 *@s2: string
 *
 *Return: String or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k, num;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	num = i + j + 1;

	str = malloc(sizeof(char) * num);

	if (str == NULL)
		return (NULL);

	for (k = 0; k <= num; k++)
	{
		if (k < i)
			str[k] = s1[k];
		else
		{
			str[k] = s2[k - i];
		}
	}

	return (str);
}
