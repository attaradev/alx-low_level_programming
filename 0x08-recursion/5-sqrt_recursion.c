#include "main.h"

int wrapper(int x, int y);

/**
 * _sqrt_recursion -  calculate square root of a number.
 * @n: number
 * Return: result
 */

int _sqrt_recursion(int n)
{
	int result;

	result = (wrapper(1, n));

	return (result);
}

/**
 * wrapper - compares two given numbers in finding the square root
 * @x: first number
 * @y: second number
 * Return: first number compared to second number
 */

int wrapper(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (wrapper(x += 1, y));
}
