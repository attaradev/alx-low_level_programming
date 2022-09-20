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
	int len, x, y;

	len = 0;

	while (s[len] != '\0')
		len++;

	x = len - 1;
	y = 0;

	while (x > y)
	{
		swap_char(s + x, s + y);
		x--;
		y++;
	}
}
