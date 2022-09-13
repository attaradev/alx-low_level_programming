#include "main.h"

/**
 * print_last_digit - print and return last digit
 *
 * @n: integer to check
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	_putchar(i);
	return (i);
}
