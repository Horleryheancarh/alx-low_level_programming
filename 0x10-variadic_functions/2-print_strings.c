#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - Print all input strings
 *@separator: Separator
 *@n: Number of inputs
 *
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	char *str;

	va_start(all, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(all, char *);
		if (!str)
			printf("(nil)");
		printf("%s", str);

		if (separator && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(all);
}
