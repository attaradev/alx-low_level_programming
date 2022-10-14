#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments provided
 * @n: const n, number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
