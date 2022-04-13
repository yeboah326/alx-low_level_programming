#include "main.h"
/**
 * jack_bauer - A function that prints every minute of the day
 * of a given integer
 */
void jack_bauer(void)
{
int hourOne = 0;
int hourTwo = 0;
int minuteOne = 0;
int minuteTwo = 0;
while (hourOne <= 2)
{
while (hourTwo <= 9)
{
while (minuteOne <= 5)
{
while (minuteTwo <= 9)
{
_putchar('0' + hourOne);
_putchar('0' + hourTwo);
_putchar(':');
_putchar('0' + minuteOne);
_putchar('0' + minuteTwo);
_putchar('\n');
minuteTwo++;
}
minuteTwo = 0;
minuteOne++;
}
if ((hourOne  == 2) & (hourTwo == 3))
break;
minuteOne = 0;
hourTwo++;
}
hourTwo = 0;
hourOne++;
}
}
