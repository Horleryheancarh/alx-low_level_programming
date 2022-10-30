#include "main.h"

/**
 *_atoi - convert string to integer
 *@s: input string
 *
 *Return: integer
 */
int _atoi(char *s)
{
	unsigned int sign = 1;
	unsigned int new_num = 0;
	unsigned int j;
	unsigned int i = 0;
	unsigned int size = 0;
	unsigned int m = 1;

	while (*(s + i) != '\0')
	{
		if (size > 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;

		if (*(s + i) == '-')
			sign *= -1;

		if ((*(s + i) >= '0') && (*(s + i) <= '9'))
		{
			if (size > 0)
				m *= 10;
			size++;
		}
		i++;
	}

	for (j = i - size; j < i; j++)
	{
		new_num = new_num + ((*(s + j) - 48) * m);
		m /= 10;
	}
	return (sign * new_num);
}
