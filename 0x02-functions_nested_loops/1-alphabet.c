#include <stdio.h>
/**
 * print_alphabet - A function that prints the alphabets followed by a new line
 * Return: 0
 */
void print_alphabet(void)
{
int alpha = 97;
for (alpha; alpha <= 122; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}

/**
 * main - A function that runs the print_alphabet function
 * Return: 0
 */
int main(void)
{
print_alphabet();
return (0);
}
