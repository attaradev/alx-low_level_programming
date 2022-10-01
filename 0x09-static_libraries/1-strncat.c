#include "main.h"

/**
 * _strncat - join two strings
 * @dest: the first string
 * @src: the second string
 * @n:the number of characters to copy
 *
 * Return: the joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';

	return (dest);
}
