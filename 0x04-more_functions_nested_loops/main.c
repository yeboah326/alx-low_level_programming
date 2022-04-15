#include "main.h"
#include <stdio.h>
/**
 * main - Function to test out written functions
 * Return: 0
 */
int main(void)
{
char c;
printf("0-isupper.c\n");
c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));

printf("\n1-isdigit.c\n");
c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));

printf("\n2-mul.c\n");
printf("%d\n", mul(98, 1024));
printf("%d\n", mul(-402, 4096));

printf("\n3-print_numbers.c\n");
print_numbers();

printf("\n4-print_most_numbers.c\n");
print_most_numbers();

printf("\n5-more_numbers.c\n");
more_numbers();

printf("\n6-print_line.c\n");
print_line(0);
print_line(2);
print_line(10);
print_line(-4);

printf("7-print_diagonal.c\n");
print_diagonal(0);
print_diagonal(2);
print_diagonal(10);
print_diagonal(-4);

printf("\n8-print_square.c\n");
print_square(2);
print_square(10);
print_square(0);

printf("\n9-fizz_buzz.c\n");
fizz_buzz();

printf("10=print-triangle.c\n");
print_triangle(2);
print_triangle(10);
print_triangle(1);
print_triangle(0);

return (0);
}
