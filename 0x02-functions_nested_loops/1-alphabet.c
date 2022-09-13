#include <stdio.h>

/**
 * print_alphabet - print alphabets
 * Return: void
 */
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}

/**
 * main - prints alphabets and newline
 * Return: Always 0
 */
int main(void)
{
	print_alphabets();
	return 0;
}
