#include "main.h"

/**
 * print_number - print integer
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	unsigned int j, i, base_10 = 1;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
	j = i;

	while (j > 9)
	{
		j /= 10;
		base_10 *= 10;
	}

	j = i;
	while (base_10 > 1)
	{
		_putchar((j / base_10) + '0');
		j %= base_10;
		base_10 /= 10;
	}
	_putchar((i % 10) + '0');
}
