#include "main.h"

/**
 * print_to_98 - print natural numbers from n to 98,
 * followed by a new line
 *
 * @n: number to start counting from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
			_putchar('0' + i);
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
			_putchar('0' + i);
	}
	_putchar('\n');
}
