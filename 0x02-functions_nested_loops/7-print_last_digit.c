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
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit);
	return (last_digit);
}
