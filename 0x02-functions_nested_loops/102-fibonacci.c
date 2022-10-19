#include <stdio.h>
/**
 *main - Entry point
 *Description: Program to print first 50 fibonacci numbers
 *
 *Return: 0 Success
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int n = 0;
	int temp;

	printf("%d, %d", a, b);
	while (n < 50)
	{
		temp = b;
		printf(", %d", temp);
		b += a;
		a = temp;
		n++;
	}
	printf("\n");

	return (0);
}
