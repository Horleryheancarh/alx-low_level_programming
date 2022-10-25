#include "main.h"

/**
 *_strlen- gets the length of a string
 *@s: string
 *
 *Return: integer
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
