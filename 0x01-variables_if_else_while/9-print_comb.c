#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
int n = 0;
for (n; n < 10; n ++)
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

