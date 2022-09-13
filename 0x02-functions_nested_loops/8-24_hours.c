#include "main.h"

/**
 * jack_bauer - print each minute of the day
 * Return: void
 */
void jack_bauer(void)
{
	int hour;

	for (hour = 0; hour <= 23; hour++)
	{
		int min;

		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
