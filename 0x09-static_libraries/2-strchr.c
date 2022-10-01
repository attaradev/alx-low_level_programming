#include <stdlib.h>
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string of characters to search
 * @c: character to search for
 * Return: pointer to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
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

	return (NULL);
}
