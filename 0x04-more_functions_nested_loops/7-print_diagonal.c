#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int len;
	
	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			int space;

			for (space = 0; space < len; space++)
				_putchar(' ');
			_putchar('\\');	
			if (len == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
