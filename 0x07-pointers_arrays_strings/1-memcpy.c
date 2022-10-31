#include "main.h"

/**
 *_memcpy - copy n bytes from src to dest
 *@dest: pointer
 *@src: pointer
 *@n: integer
 *
 *Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
