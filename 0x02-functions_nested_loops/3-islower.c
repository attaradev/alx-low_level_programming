#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: character to check
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	int result;

	result = (c >= 'a' && c <= 'z') ? 1 : 0;
	return (result);
}
