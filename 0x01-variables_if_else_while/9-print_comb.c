#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int n;
for (n = 0; n < 10; n ++)
{
putchar(48 + n);
if (n == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
