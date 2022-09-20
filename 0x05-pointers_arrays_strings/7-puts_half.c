#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
		len++;

	i = len % 2 == 0 ? len / 2 : (len + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
