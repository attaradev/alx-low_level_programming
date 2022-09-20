#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: first element
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		char str[] = i == n - 1 ? "%d\n" : "%d, ";
		printf(str, a[i]);
		i++;
	}
}
