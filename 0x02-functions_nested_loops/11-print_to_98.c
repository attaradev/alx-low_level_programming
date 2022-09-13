#include <stdio.h>
#include "main.h"

/**
 * print - print number
 *
 * @i: number to print
 *
 * Return: void
 */
void print(int i)
{
	if (i != 98)
		printf("%d, ", i);
	else
		printf("%d", i);
}

/**
 * print_to_98 - print natural numbers from n to 98,
 * followed by a new line
 *
 * @n: number to start counting from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			print(i);
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			print(i);
		}
	}
	printf("\n");
}
