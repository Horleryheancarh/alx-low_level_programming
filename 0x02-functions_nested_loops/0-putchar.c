#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Program to print _putchar
 *
 *Return: 0 Success
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i, len;

	len = sizeof(str) / sizeof(int);
	for (i = 0; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
