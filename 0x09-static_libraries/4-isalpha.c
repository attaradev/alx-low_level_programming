#include "main.h"

/**
 * _isalpha - Entry point for programme
 *
 * @c: Character to check
 *
 * Description: Checks for alphabetic characters
 *
 * Return: Returns 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
