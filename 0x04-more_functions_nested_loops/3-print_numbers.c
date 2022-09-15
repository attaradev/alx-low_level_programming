#include "main.h"

/**
 * print_numbers - print all numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int number;
	
	number = 48;
	
	for (number = 48; number < 58; number++)
		_putchar(number);

	_putchar('\n');
}
