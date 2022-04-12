#include <stdio.h>
/**
 * print_alphabet_x10 - A function that prints the ten times the alphabets
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int alpha = 97;
for (int all = 0; all <= 10; all++)
{
for (alpha; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
alpha = 97;
}
}

/**
 * main - A function that runs the print_alphabet_x10 function
 * Return: 0
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
