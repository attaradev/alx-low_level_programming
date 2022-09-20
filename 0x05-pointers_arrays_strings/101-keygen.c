#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point to generate random password
 *
 * Return: generated password
 */
int main(void)
{
	char c;
	int = x;

	srand(time(0));

	while (x <= 2645)
	{
		c = rand() % 28;
		x += c;
		putchar(c);
	}

	putchar(2772 - x);

	return (0);
