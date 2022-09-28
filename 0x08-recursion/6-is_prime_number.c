#include "main.h"

/**
 * wrapper - determine if number is prime
 * @n: the number
 * @x: test number
 * Return: compared values
 */
int wrapper(int x, int n)
{
	if (n == x)

		return (1);
	else if (n % x == 0)
		return (0);

	return (wrapper(x + 1, n));
}

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 1 if prime and 0 if not prime
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);

	return (wrapper(2, n));
}
