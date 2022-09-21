#include "main.h"

/**
 * _strncat - concatenate n bytes of src to desc
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to concat
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	len = 0;
	i = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
