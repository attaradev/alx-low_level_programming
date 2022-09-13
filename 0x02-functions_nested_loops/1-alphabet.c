#include "main.h"

/**
 * print_alphabet - print alphabets
 * Return: void
 */
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
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
