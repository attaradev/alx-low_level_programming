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
 * print_alphabets_x10 - print alphabets 10 times
 * Return: void
 */
void print_alphabets_x10(void)
{
  for (int i = 0; i < 10; i++)
  {
    print_alphabet();
  }
}

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	print_alphabets_x10();
	return 0;
}
