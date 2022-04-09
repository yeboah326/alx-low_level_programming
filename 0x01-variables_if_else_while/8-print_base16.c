#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int n;
char c;
for (n = 0; n < 10; n++)
putchar(48 + n);
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
