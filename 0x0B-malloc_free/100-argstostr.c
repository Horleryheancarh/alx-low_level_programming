#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: array
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, l;

	if (ac == 0)
		return (NULL);

	for (k = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			k++;
		k++;
	}

	str = malloc((k + 1) * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (i = j = l = 0; l < k; j++, l++)
	{
		if (av[i][j] == '\0')
		{
			str[l] = '\n';
			i++;
			l++;
			j = 0;
		}
		if (l < k - 1)
			str[l] = av[i][j];
	}
	str[l] = '\0';

	return (str);
}
