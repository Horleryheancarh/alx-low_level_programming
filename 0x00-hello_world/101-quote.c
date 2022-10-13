#include <stdio.h>
/**
 *main - write string to terminal
 *
 *Description: write function - is to write standard out
 *
 *Return: 1 - Success
 */
int main(void)
{
	char str[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19";

	write(2, str, 59);
	return (1);
}
