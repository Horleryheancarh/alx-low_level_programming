#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Print all alphabets in lowercase
 *
 *Return: 0 Success
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
