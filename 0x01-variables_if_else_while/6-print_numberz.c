#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Print numbers between 0 and 9 followed by new line
 *
 *Return: 0 Success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
