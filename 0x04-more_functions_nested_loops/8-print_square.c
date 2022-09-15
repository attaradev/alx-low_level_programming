#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: void
 */
void print_square(int size)
{
  int x;

  if (size > 0)
  {
    for (x = 0; x < size; x++)
    {
      int y;

      for (y = 0; y < (size - 1); y++)
        _putchar('#');

      _putchar('#');
      _putchar('\n');
    }
  }
  else
    _putchar('\n');
}
