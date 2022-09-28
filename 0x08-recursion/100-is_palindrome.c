#include "main.h"

/**
 * _strlen_recursion - calculate string length
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _check - checks if palindrome
 * @s: takes in string
 * @len: length
 * Return: check if palindrome
 */
int _check(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s != s[len - 1])
		return (0);
	else
		return (_check(s + 1, len - 2));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: takes in a string
 * Return: 1 if palindrome or 0
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (length <= 1)
	{
		return (1);
	}

	return (_check(s, length));
}
