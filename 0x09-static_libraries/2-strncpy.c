#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: the first string
 * @src: the second string
 * @n: number of characters to copy
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
