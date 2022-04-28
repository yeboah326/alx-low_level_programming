#include "main.h"
/**
 * factorial - function that returns the
 * factorial of a given number
 *
 * @n: the number whose factorial is to be printed
 * Return: the factorial of n
 */
int factorial(int n)
{
if (n == 0)
return (1);

else if (n < 0)
return (-1);

return (n * factorial(n - 1));
}
