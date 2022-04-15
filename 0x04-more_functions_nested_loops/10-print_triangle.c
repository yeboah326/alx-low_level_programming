#include "main.h"
/**
 * print_triangle - function that prints a triangle,
 *  followed by a new line
 *
 * @size: size of the triangle
 */

void print_triangle(int size)
{
int text = 1;
int temp_text = 1;
int space = size - 1;
int temp_space = space;

if (size <= 0)
size = 0;

while (size--)
{
while (temp_space--)
_putchar(' ');

space -= 1;
temp_space = space;

while (temp_text--)
_putchar(35);

text += 1;
temp_text = text;

_putchar('\n');
}
}
