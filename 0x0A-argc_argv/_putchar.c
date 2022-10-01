#include <unistd.h>

/**
 * _putchar - writes the character c to the std
 * @c: the character to output
 *
 * Return: on success 1,
 * On error, -1 is returned, error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
