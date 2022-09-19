#include "main.h"

/**
 * _strlen - lenth of string
 * @n: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;

	while (s[count] != '\0')
		count++;

	return count;
}
