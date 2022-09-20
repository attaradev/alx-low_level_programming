#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\n')
		len++;

	for (i = (len / 2); i <= len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
