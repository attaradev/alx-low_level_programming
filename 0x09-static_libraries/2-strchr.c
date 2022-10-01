#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string of characters to search
 * @c: the character to search for
 *
 * Return: the pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for  (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}

	if (*(s + i) == c)
	{
		return (s + i);
	}

	return ('\0');
}
