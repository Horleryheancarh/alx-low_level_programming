#include <stdio.h>
/**
 *main - Entry point
 *Description: Program to print first 50 fibonacci numbers
 *
 *Return: 0 Success
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	int n = 2;
	long int temp;

	printf("%ld, %ld", a, b);
	while (n < 50)
	{
		temp = b;
		b += a;
		printf(", %ld", b);
		a = temp;
		n++;
	}
	printf("\n");

	return (0);
}
