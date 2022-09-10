#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			if (!(x == y || y <= x))
			{
				putchar(x);
				putchar(y);
				if (!(x == 56 && y == 57))
				{
					putchar(44);
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
