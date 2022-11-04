#include "main.h"

/**
 *_strlen_recursion - length of a string using recursion
 *@s: string
 *
 *Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *compare - compare the characters
 *@s: string
 *@i: integer
 *@j: integer
 *
 *Return: 0 false, 1 true
 */
int compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + compare(s, i + 1, j - 1));
	}
	return (0);
}

/**
 *is_palindrome - checks if a string is equal to its reverse
 *@s: string
 *
 *Return: 0 false, 1 true
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
