#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	while (len + 1)
		_putchar(s[len--]);

	_putchar('\n');
}
