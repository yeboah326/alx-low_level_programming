#include "main.h"
/**
 * print_last_digit - A function that prints the last value
 * of a given integer
 * @n : the integer to be checked
 * Return: 0
 */
int print_last_digit(int n)
{
int mod = 0;
if (n < 0)
mod = -1 * (n % 10);
else
mod = (n % 10);
_putchar(mod + '0');
return (mod);
}
