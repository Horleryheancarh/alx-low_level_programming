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
	temp = 0;
	sum = 0;
	while (temp < 4000000)
	{
		temp = b;
		b += a;
		if ((temp % 2) == 0)
			sum += temp;
		a = temp;
	}
	printf("%ld\n", sum);

	return (0);
}
