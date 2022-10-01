#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the first string
 * @needle: the substring
 *
 * Return: Returns a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;

		while (*j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}

		if (!*j)
			return (i);
		haystack++;
	}
	return ('\0');
}
