#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 48, q = 48, y = 48, x = 49;

	while (p <= 57)
	{
		while (q <= 57)
		{
			while (y <= 57)
			{
				while (x <= 57)
				{																								putchar(p);
					putchar(q);
					putchar(' ');
					putchar(y);
					putchar(x);
					if (!(p == 57 && q == 56 && y == 57 && x == 57))
					{
						putchar(',');
						putchar(' ');
					}
					x++;
				}
				y++;
				x = 48;
			}
			q++;
			q = p;
			x = q + 1;
		}
		p++;
		q = 48;
		y = p;
		x = q + 1;
	}
	putchar('\n');
	return (0);
}
