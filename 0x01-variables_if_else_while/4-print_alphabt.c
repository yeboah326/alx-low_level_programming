#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
if (c == 'q')
continue;
else if (c == 'e')
continue;
else
putchar(c);
putchar('\n');
return (0);
}
