#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - checks for alpha character
 * @c: character to check
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
