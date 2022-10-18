#include "main.h"
/**
 *_islower - check the case of a Character
 *@c: Character to check
 *
 *Return: 1 if True, 0 if False
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
