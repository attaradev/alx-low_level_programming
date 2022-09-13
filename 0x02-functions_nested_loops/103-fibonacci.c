#include <stdio.h>

/**
 * main - print sum of even fibonacci
 * suit elements fibonacci suit numbers
 * Return: 0
 */
int main(void)
{
	unsigned long x, y, z, sum;

	x = 0;
	y = 1;
	z = 0;
	sum = 0;

	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if ((x % 2) == 0)
			sum += x;
	}

	printf("%ld\n", sum);

	return (0);
}
