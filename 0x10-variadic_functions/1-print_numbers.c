#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print the number and a new line
 * @separator: char pointer
 * @n: total numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
