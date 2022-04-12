#include "main.h"
/**
 * _islower - A function that returns 1 when c is lowercase
 * or 0 when c is not lowercase
 * @c : the character to be checked
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 & c <= 122)
return (1);
return (0);
}

/**
 * main - A function that runs the _islower function
 * Return: 0
 */
int main(void)
{
int r;
r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}
