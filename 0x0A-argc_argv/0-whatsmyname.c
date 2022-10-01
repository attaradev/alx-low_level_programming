#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *name = argv[argc - argc];

	printf("%s\n", name);

	return (0);
}
