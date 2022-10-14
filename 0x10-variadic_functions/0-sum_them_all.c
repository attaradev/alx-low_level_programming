#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all arguments provided
 * @n: const n, number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
