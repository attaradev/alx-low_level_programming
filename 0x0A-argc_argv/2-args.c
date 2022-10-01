#include <stdio.h>

/**
 * main - print the number of commands supplied
 * @argc: computes for the number of commands supplied
 * @argv: an array commands
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
