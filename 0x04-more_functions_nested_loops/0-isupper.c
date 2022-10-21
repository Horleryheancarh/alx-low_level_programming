#include "main.h"
/**
 *_isupper - check the case of a Character
 *@c: Character to check
 *
 *Return: 1 if True, 0 if False
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
