#include "main.h"

/**
 * _puts - print string to stdout
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	while(*str)
		_putchar(*str);

	_putchar('\n');
}
