#include "function_pointers.h"

/**
 *print_name - function to call pointer to a function
 *@name: string to be printed
 *@f: pointer to function
 *
 *Return: void
 */
void print_name(char *name, void (*f) (char *))
{
	if (name && f)
		f(name);
}
