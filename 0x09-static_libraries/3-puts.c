#include "main.h"
/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: string to be printed
 */
void _puts(char *str)
{
int n = 0;
while (str[n])
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
