#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	while (*s)
		_putchar(*s--);

	_putchar('\n');
}
