#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			if (i != 0)
			{
				int s;

				for (s = 1; s <= i; s++)
					_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
