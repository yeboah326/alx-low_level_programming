#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int n = 0;
char c = 'a';
for (n; n < 10; n++)
putchar(48 + n);
for (c; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
