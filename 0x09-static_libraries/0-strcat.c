#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;
	i = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
