#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: result
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i, j;

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
		len1++;

	while (src[len2] != '\0')
		len2++;

	char str[len1 + len2 + 1];

	for (i = 0; i <= len1; i++)
		str[i] = dest[i];

	for (j = 0;j <= len2; j++)
	       str[len1 + j] = src[i];

	str[len1 + len2 + 1] = '\0';

	return (str);
}
