#include <stdio.h>
/**
 *main - print string to terminal
 *
 *Description: fprintf function - is to output to standard error
 *
 *Return: 1 - Success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, str, 59);
	return (1);
}
