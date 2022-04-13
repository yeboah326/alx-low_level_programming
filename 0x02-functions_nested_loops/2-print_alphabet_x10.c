#include "main.h"
/**
 * print_alphabet_x10 - A function that prints the ten times the alphabets
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int alpha = 97;
int all = 0;
while (all < 10)
{
while (alpha <= 122)
{
_putchar(alpha);
alpha++;
}
_putchar('\n');
alpha = 97;
all++;
}
}
