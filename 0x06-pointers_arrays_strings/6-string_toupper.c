#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase letters to uppercase
 * @s: string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		char c;

		c = s[i];
		if (c >= 'a' && c <= 'z')
			s[i] = c + 32;

		i++;
	}

	return (s);
}
