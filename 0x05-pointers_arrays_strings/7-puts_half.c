#include "main.h"
/**
 * puts_half - a function that prints half of
 * a string, followed by a new line
 *
 * @str: string to be halved
 */
void puts_half(char *str)
{
int str_len = 0;
int org_len = 0;

while (str[str_len])
str_len++;

org_len = str_len;

if (str_len % 2 != 0)
str_len = (str_len - 1) / 2;
str_len = str_len / 2;

while (str_len <= org_len)
{
_putchar(str[str_len]);
str_len++;
}

_putchar('\n');

}
