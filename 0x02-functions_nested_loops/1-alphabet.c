#include "main.h"
/**
 *print_alphabet - Function to print lowercase alphabets
 *
 *Description: Using functions
 *Return : 0 Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
