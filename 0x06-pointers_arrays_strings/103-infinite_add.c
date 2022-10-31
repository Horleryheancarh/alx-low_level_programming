#include "main.h"

/**
 *infinite_add - add two numbers in string format
 *@n1: string of number
 *@n2: string of number
 *@r: buffer to store result
 *@size_r: buffer size
 *
 *Return: string off result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int c1 = 0, c2 = 0, op, l, r1, r2, add = 0;

	while (n1[c1] != '\0')
		c1++;

	while (n2[c2] != '\0')
		c2++;

	if (c2 >= c1)
		l = c2;
	else
		l = c1;

	if (size_r <= l + 1)
		return (0);

	r[l + 1] = '\0';

	c1--, c2--, size_r--;

	r1 = n1[c1] - 48;
	r2 = n2[c2] - 48;

	while (l >= 0)
	{
		op = r1 + r2 + add;

		if (op >= 10)
			add = op / 10;
		else
			add = 0;

		if (op > 0)
			r[l] = (op % 10) + 48;
		else
			r[l] = '0';

		if (c1 > 0)
			c1--, r1 = n1[c1] - 48;
		else
			r1 = 0;

		if (c2 > 0)
			c2--, r2 = n2[c2] - 48;
		else
			r2 = 0;

		l--, size_r--;
	}

	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}
