#include "main.h"
/**
 *_isalpha - Check if character is an alphabet
 *@c: character to check
 *
 *Return: 1 if True, 0 is False
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	} else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
