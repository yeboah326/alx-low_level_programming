#include "main.h"
/**
 * main - Function to print _putchar
 * Return: 0
 */
int main(void)
{
char str[8] = "_putchar";
int letter = 0;
while (letter <= 7)
{
_putchar(str[letter]);
letter++;
}
_putchar('\n');
return (0);
}
