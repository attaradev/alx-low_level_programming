#include "main.h"

/**
 * times_table - print the 9 times table
 * Return: void
 */
void times_table(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		int mult;

		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			int result;

			_putchar(',');
			_putchar(' ');
			result = digit * mult;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar('0' + (result / 10));

			_putchar('0' + (result % 10));
		}

		_putchar('\n');
	}
}
