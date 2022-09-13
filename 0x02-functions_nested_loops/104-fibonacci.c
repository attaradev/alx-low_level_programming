#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long x = 0, y = 1, z;
	unsigned long ax, bx, ay, by;
	unsigned long a, b;

	for (i = 0; i < 92; i++)
	{
		z = x + y;
		printf("%lu, ", z);
		x = y;
		y = z;
	}
	ax = x / 10000000000;
	ay = y / 10000000000;
	bx = x % 10000000000;
	by = y % 10000000000;

	for (i = 93; i < 99; i++)
	{
		a = ax + ay;
		b = bx + by;
		if ((bx + by) > 9999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (i != 98)
			printf(", ");

		ax = ay;
		bx = by;
		ay = a;
		by = b;
	}

	printf("\n");

	return (0);
}
