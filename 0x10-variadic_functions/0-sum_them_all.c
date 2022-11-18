#include "variadic_functions.h"
#include <stdarg.h>
/**
 *
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	int sum;

	va_start (all, n);

	sum = 0;
	if (n == 0)
		return (sum);

	for (i = 0; i < n; i++)
		sum += va_arg (all, int);

	va_end (all);
	return (sum);
}
