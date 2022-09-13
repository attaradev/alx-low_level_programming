#include "main.h"
/**
 * print_times_table - prints the times table with
 * parameter
 *
 * @n: parameter
 *
 *Return: void
 */
void print_times_table(int n)
{

	if (n <= 15 && n >= 0)
	{
		int digit;

		for (digit = 0; digit <= n; digit++)
		{
			int mult;

			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				int result;

				_putchar(',');
				_putchar(' ');
				result = digit * mult;
				if (result <= 99)
					_putchar(' ');

				if (result <= 9)
					_putchar(' ');
				if (result >= 100)
				{
					_putchar('0' + (result / 100));
					_putchar('0' + ((result / 10) % 10));
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar('0' + (result / 10));
				}
				_putchar('0' + (result % 10));
			}
			_putchar('\n');
		}
	}
}
