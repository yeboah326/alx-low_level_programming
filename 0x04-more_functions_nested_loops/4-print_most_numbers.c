#include "main.h"
/**
 * print_most_numbers - function to print from 0 to 9
 * and a new line
 *
 */
void print_most_numbers(void)
{
int num = 48;
while (num <= 57)
{
if ((num == 50) | (num == 52))
num++;
_putchar(num);
num++;
}
_putchar('\n');
}
