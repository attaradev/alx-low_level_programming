#include "main.h"

/**
 * *_strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: the point to dest
 */
*_strcpy(char * dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	*(dest + i) = '\0';

	return (dest);
}