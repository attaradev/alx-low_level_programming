#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - creates memory allocation
 * @b: unsigned int
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
