#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!(name == '\0' || f == '\0'))
		f(name);
}
