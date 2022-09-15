#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: void
 */
void print_square(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int x;

		for (x = 0; x < size; x++)
		{
			int y;

			for (y = 0; y < size; y++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
