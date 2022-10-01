#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of two numbers supplied as commands
 * @argc: the number of arguments pass
 * @argv: an array of commands pass
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}

	return (0);
}
