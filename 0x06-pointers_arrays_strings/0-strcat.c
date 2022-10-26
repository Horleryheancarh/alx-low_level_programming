#include "main.h"

/**
 *_strcat - append src to dest
 *@dest: string
 *@src: string
 *
 *Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		j++;
		i++;
	}

	return (dest);
}
