#include <stdio.h>

/**
 * main - prints out first 50
 * fibonacci suit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long x, y, z;

	x = 0;
	y = 1;
	for (i = 0; i < 50; i++)
	{
		z = x + y;
		printf("%lu", z);
		x = y;
		y = z;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
