#include <stdio.h>
#include "main.h"

/**
 * main -  program that prints the number of arguments passed into it.
 * @argc: count arguments
 * @argv: arguments vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}
