#include <stdio.h>
/**
 *main - Entry point
 *Description: Program find the sum of even fibonacci numbers under 4000000
 *
 *Return: 0 Success
 */
int main(void)
{
	long int a, b, temp, sum;

	a = 1;
	b = 2;
	while (b < 4000000)
	{
		temp = b;
		b += a;
		if ((b % 2) == 0)
			sum += b;
		a = temp;
	}
	printf("%ld\n", sum);

	return (0);
}
