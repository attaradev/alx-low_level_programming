#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring or
 * NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *x, *y;

	while (*haystack != '\0')
	{
		x = haystack;
		y = needle;

		while (*y != '\0' && *haystack == *y)
		{
			haystack++;
			y++;
		}

		if (!*y)
			return (x);
		haystack++;
	}
	return ('\0');
}
