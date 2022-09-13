#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count;

	count = 10;
	while (count > 0)
	{
		char x;

		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		count--;
	}
}
