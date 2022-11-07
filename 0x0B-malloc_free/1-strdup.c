#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate string and return pointer to duplicate
 *@str: String
 *
 *Return: Pointer or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)

	s = malloc(sizeof(char) * (i + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		s[j] = str[j];

	return (s);
}
