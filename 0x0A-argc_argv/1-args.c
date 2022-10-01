#include <stdio.h>

/**
 * main - print number of arguments supplied
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;

	i = argc - 1;
	printf("%d\n", i);

	return (0);
}
