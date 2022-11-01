#include "main.h"

/**
 *_strstr - find needle in a haystack
 *@haystack: string
 *@needle: string
 *
 *Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*haystack != '\0' && *b != '\0' && *haystack == *b)
		{
			haystack++;
			b++;
		}

		if (!*b)
			return (a);
		haystack = a + 1;
	}
	return ('\0');
}
