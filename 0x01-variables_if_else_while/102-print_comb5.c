#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Print combinations of numbers from 00 01 to 98 99
 *
 *Return: 0 Success
 */
int main(void)
{
int i, j, k, l, num1, num2;

for (i = 48; i < 58; i++)
	for (j = 48; j < 58; j++)
		for (k = 48; k < 58; k++)
			for (l = 48; l < 58; l++)
			{
				num1 = (i * 10) + j;
				num2 = (k * 10) + l;

				if (num1 < num2)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(44);
					putchar(32);
				}
			}

putchar('\n');

return (0);
}
