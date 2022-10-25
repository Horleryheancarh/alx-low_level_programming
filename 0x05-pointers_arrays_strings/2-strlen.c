#include "main.h"

/**
 *_strlen - gets the length of a string
 *@s: string
 *
 *Returns: integer
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}
	return (n);
}
