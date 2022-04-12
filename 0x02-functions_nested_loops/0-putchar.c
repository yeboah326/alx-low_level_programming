#include "main.h"
/**
 * main - Funtion to print _putchar
 * Return: 0
 */
int main(void)
{
char str[8] = "_putchar";
for (int letter = 0; letter <= 8; letter++)
_putchar(str[letter]);
_putchar('\n');
return (0);
}
