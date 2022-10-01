#include "main.h"

/**
 * _strlen - count for the length of a string
 * @s: string variable to count
 *
 * Return: return the length of the string
 */

int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
		++counter;

	return (counter);
}
