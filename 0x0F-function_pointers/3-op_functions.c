#include "3-calc.h"

/**
 *op_add - adds two numbers
 *@a: integer
 *@b: integer
 *
 *Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two numbers
 *@a: integer
 *@b: integer
 *
 *Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiply two numbers
 *@a: integer
 *@b: integer.
 *
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two numbers.
 *@a: integer.
 *@b: integer.
 *
 *Return: Division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (a / b);
}

/**
 *op_mod - modulus of two numbers
 *@a: integer
 *@b: integer
 *
 *Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	return (a % b);
}






