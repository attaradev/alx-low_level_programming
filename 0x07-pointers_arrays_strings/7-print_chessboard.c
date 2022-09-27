#include "main.h"

/**
 * print_chessboard - print the chessboard
 * @a: input pointer
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	y = 0;

	while (x < 64)
	{
		if (x % 8 == 0 && x != 0)
		{
			y = x;
			_putchar('\n');
		}

		_putchar(a[x / 8][x - y]);
		x++;
	}

	_putchar('\n');
}
