#include "main.h"
/**
 * puts2 - a function that prints every other
 * character of a string, starting with the
 * first character, followed by a new line
 *
 *
 * @str: pointer to the string to be printed
 */
void puts2(char *str)
{
int n = 0;

while (str[n])
{
if (n % 2 == 0)
_putchar(str[n]);
n++;
}
_putchar('\n');

}
