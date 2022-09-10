#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 *        followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
