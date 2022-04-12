#include "main.h"
/**
 * print_alphabet - A function that prints the alphabets followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
int alpha = 97;
while (alpha <= 122)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
}
