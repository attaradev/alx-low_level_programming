#include "main.h"

/**
 * print_alphabet - print alphabets
 * Return: void
 */
void print_alphabet(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

/**
 * main - prints alphabets and newline
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
