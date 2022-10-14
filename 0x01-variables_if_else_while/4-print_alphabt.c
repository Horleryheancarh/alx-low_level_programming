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
	int i;

	for (i = 0; i < 26; i++)
	{
		if (alpha[i] != 'q' && alpha[i] != 'e')
			putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
