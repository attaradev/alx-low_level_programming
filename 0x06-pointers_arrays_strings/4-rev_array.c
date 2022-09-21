#include "main.h"

/**
 * reverse_array - reverse content of array
 * @a: array to reverse
 * @n: number of elements to reverse
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		int x;

		x = a[i];
		a[i] = a[n];
		a[n] = x;
		i++;
		n--;
	}
}
