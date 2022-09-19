#include "main.h"

/**
 * swap_char  - swap characters
 * @a: first character
 * @b: second character
 * Return: void
 */
void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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

	for (i = 0; i < ((len - 1) / 2); i++)
		swap_char(s + i, s + (len - i));
}
