#include <stdio.h>

/**
 * print_alphabets - prints alphabets
 * Return: void
 */
void print_alphabets(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	} 
}

/**
 * main - prints alphabets and newline
 * Return: Always 0
 */
int main(void)
{
	print_alphabets();
	putchar('\n');
	return 0;
}
