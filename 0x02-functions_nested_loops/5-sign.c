#include "main.h"
/**
 * print_sign - A function that returns 1 when n is positive,
 * 0 when n is 0 and -1 when n is negative
 * @n : the integer to be checked
 * Return: 0, 1 or -1
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
if (n == 0)
{
_putchar(48);
return (0);
}
_putchar(45);
return (-1);
}
