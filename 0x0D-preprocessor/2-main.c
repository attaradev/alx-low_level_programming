#include <stdio.h>

/**
 * main - entry point for the program
 * * Return: void
 *
 * Description:  program that prints the name of the file it was
 * compiled from, followed by a new line. This function makes use
 * of the standard library
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
