#include <stdio.h>
/**
 *main - Entry point
 *Description: Program to print first 50 fibonacci numbers
 *
 *Return: 0 Success
 */
int main(void)
{
	int a = 0;
	int b = 1;
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
	printf("%d", n);

	return (0);
}
