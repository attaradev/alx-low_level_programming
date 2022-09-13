#include "main.h"

/**
 * print_alphabets_x10 - print alphabets 10 times
 * Return: void
 */
void print_alphabets_x10(void)
{
	int count;

	count = 10;
	while (count > 0)
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			print_alphabet();
		}
		count--;
	}
}
