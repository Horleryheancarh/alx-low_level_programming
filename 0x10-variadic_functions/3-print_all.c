#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_all - Print any datatype
 *@format: a list of types
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char arg[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (arg[j])
		{
			if (format[i] == arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(all, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(all, double)), c = 1;
			break;
		case 's':
			str = va_arg(all, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(all);
}
