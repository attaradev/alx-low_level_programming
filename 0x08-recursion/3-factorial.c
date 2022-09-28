#include "main.h"

/**
 * factorial - calculate the factorial of a given number
 * @n: the given number
 * Return:  factorial of the number or -1 if error
 */
int factorial(int n)
{
	int res;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
