#include "main.h"
#include <stdio.h>
/**
 * main -  program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print
 * Fizz instead of the number and for the multiples of
 * five print Buzz. For numbers which are multiples of both
 * three and five print FizzBuzz
 * Return: 0 or 1
 *
 */
int main(void)
{
int num = 1;
while (num <= 100)
{

if ((num % 3 == 0) & (num % 5 == 0))
{
printf("FizzBuzz");
}

else if (num % 3 == 0)
{
printf("Fizz");
}

else if (num % 5 == 0)
{
printf("Buzz");
}

else
{
printf("%d", num);
}

if (num != 100)
printf(" ");
num++;
}
printf("\n");
return (0);
}
