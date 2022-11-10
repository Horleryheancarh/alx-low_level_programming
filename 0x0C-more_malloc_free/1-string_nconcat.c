#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m, k;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n > j)
		n = j;

	m = i + n;
        str = malloc(m + 1);

	if (str == NULL)
		return (NULL);

	for (k = 0; k <= m; k++)
	{;
		if (k < i)
			str[k] = s1[k];
		else
			str[k] = s2[k - i];
	}

	str[k] = '\0';

	return (str);
}
