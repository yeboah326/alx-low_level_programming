#include "main.h"
/**
 * print_last_digit - A function that prints the last value
 * of a given integer
 * @n : the integer to be checked
 * Return: 0
 */
int print_last_digit(int n)
{
if (n < 0)
n = -1 * n;
_putchar(n % 10 + '0');
return (n % 10);
}
