#include "main.h"
/**
 * print_line - a function that draws a straight line
 * in the terminal
 *
 * @n: length of line to be printed
 */
void print_line(int n)
{
if (n <= 0)
n = 0;
while (n--)
_putchar(95);
_putchar('\n');
}
