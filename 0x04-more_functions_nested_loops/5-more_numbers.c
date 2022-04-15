#include "main.h"
/**
 * more_numbers - function that prints 10 times the
 * numbers, from 0 to 14, followed by a new line.
 *
 */
void more_numbers(void)
{
int num = 0;
int loop = 10;
while (loop--)
{
while (num < 15)
{
if (num >= 10)
_putchar('0' + 1);
_putchar('0' + num % 10);
num++;
}
num = 0;
_putchar('\n');
}
}
