#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\n')
		len++;

	for (i = 0; i < len; i++)
	{
		char x;

		x = s[i];
		s[i] = s[len - i];
		s[len - i] = x;
	}
}
