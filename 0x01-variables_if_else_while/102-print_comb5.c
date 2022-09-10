#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, x, y;
	
	i = 48;
	j = 48;
	x = 48;
	y = 49;
	while (i < 58)
	{
		while (j < 58)
		{
			while (x < 58)
			{
				while (y < 58)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(x);
					putchar(y);
					putchar(',');
					putchar(' ');
					y++;
				}
				x++;
				y = 48;
			}
			j++;
			x = 48;
		}
		i++;
		j = 48;
	}
	putchar('\n');
	return (0);
}
