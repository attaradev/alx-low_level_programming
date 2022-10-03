#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy string to memory
 * @str: string to be copied
 *Return: NULL in case of error, pointer to allocated
 *space
 */
char *_strdup(char *str)
{
	char *cpy;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cpy[i] = str[i];
	}

	cpy[len] = '\0';

	return (cpy);
}
