#include <stdio.h>

/**
 * main - print the name of the program
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *name = argv[argc - argc];

	printf("%s\n", name);

	return (0);
}
