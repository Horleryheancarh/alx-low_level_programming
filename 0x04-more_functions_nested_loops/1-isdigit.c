#include "main.h"
/**
 *_isdigit - check if a Character is a digit
 *@c: Character to check
 *
 *Return: 1 if True, 0 if False
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
