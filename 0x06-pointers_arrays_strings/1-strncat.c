#include "main.h"

/**
 *_strncat - append n bytes from src to dest
 *@dest: string
 *@src: string
 *@n: integer
 *
 *Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
