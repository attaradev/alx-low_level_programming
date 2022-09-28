#include "main.h"

/**
 * _strlen_recursion - recursively find the length of a string
 * @s: array of characters
 * Return: length of the array of characters
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
		i = _strlen_recursion(s + 1) + 1;

	return (i);
}
