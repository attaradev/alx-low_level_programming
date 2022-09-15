#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int x;

		for (x = 1; x <= size; x++)
		{
			int i, j;

			for (i = 1; i <= (size - x); i++)
				_putchar(' ');

			for (j = 1; j <= x; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
