#include "main.h"

/**
 * _isdigit - verify if a character is a digit
 * @c: character
 * Return: 1 if it is digit, 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
