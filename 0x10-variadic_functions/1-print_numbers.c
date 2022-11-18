#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print inputs with separator
 *@separator: Separator
 *@n: Number of inputs
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int i;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(all, int));
		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(all);
}
