#include "main.h"
/**
 * print_square - function that prints a square,
 * followed by a new line
 *
 * @size: the size of the square
 */
void print_square(int size)
{
int const_size = size;
int temp_size = size;
while (size--)
{
while (temp_size--)
{
_putchar(35);
}
_putchar('\n');
temp_size = const_size;
}
}
