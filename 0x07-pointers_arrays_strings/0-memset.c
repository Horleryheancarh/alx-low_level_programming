#include "main.h"

/**
 *_memset - Replace first n chararcters of s with b
 *@s: string
 *@b: character
 *@n: int
 *
 *Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
