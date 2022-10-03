#include <stdlib.h>
#include <main.h>

/**
 * create_array - create array of characters
 * @size: size of array
 * @c: character
 * Return: NULL if size is 0, or pointer to first element of array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return NULL;

	ar = malloc(size * sizeof(char));
	ar[0] = c;

	return ar;
}
