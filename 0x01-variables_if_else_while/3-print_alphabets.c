#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Print all alphabets in lower and upper case
 *
 *Return: 0 Success
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
