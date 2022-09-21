#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change lowercase letters to uppercase
 * @str: string parameter
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
